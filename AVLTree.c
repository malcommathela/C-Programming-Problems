//
// Created by malco on 08/03/2026.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* left;
    int key;
    int height;
    struct Node* right;
} Node;

// Utility Helpers
int height(Node *node) {
    if (node == NULL) return 0;
    return node->height;
}

int balanceFactor(Node* root) {
    if (root == NULL) return 0;
    return height(root->left) - height(root->right);
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node *minValueNode(Node *node) {

    Node *current = node;

    while (current->left != NULL)
        current = current->left;

    return current;
}

// Left Rotation (RR)
Node *leftRotate( Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return y;
}

// Right Rotation (LL)
Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

// Right-Left Rotation (RL)
Node *rightLeftRotate(Node *root) {
    root->right = rightRotate(root->right);
    return leftRotate(root);
}

// Left-Right Rotation (LR)
Node *leftRightRotate(Node *root) {
    root->left = leftRotate(root->left);
    return rightRotate(root);
}


Node* createNode(int key) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->key = key;
    newNode->height = 1;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int key) {

    if (root == NULL) {
        return createNode(key);
    }
    else if (key < root->key) {
        root->left = insert(root->left, key);
    }
    else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    else {
        return root;
    }

    root->height = 1 + max(height(root->left), height(root->right));
    int balance = balanceFactor(root);

    if (balance > 1 && key < root->left->key) {
        return rightRotate(root);
    }

    if (balance < -1 && key > root->right->key) {
        return leftRotate(root);
    }

    if (balance > 1 && key > root->left->key) {
        return leftRightRotate(root);
    }

    if (balance < -1 && key < root->right->key) {
        return rightLeftRotate(root);
    }

    return root;
}

void search(Node *root, int key) {

    if (root == NULL) {
        printf("Key not found\n");
        return;
    }

    if (root->key == key)
        printf("Key found\n");

    else if (key < root->key)
        search(root->left, key);

    else
        search(root->right, key);
}

void display(Node *root) {

    if (root == NULL)
        return;

    display(root->left);
    printf("%d ", root->key);
    display(root->right);
}

Node *delete(Node *root, int key) {

    if (root == NULL)
        return root;

    // Perform normal BST deletion
    if (key < root->key)
        root->left = delete(root->left, key);

    else if (key > root->key)
        root->right = delete(root->right, key);

    else {

        // Node with one child or no child
        if (root->left == NULL || root->right == NULL) {

            Node *temp;

            if (root->left != NULL)
                temp = root->left;
            else
                temp = root->right;

            // No child
            if (temp == NULL) {
                temp = root;
                root = NULL;
            }
            // One child
            else {
                *root = *temp;
            }

            free(temp);
        }

        // Node with two children
        else {

            Node *temp = minValueNode(root->right);

            root->key = temp->key;

            root->right = delete(root->right, temp->key);
        }
    }

    // If tree had only one node
    if (root == NULL)
        return root;

    // Update height
    root->height = 1 + max(height(root->left), height(root->right));

    // Get balance factor
    int balance = balanceFactor(root);

    // LL Case
    if (balance > 1 && balanceFactor(root->left) >= 0)
        return rightRotate(root);

    // LR Case
    if (balance > 1 && balanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RR Case
    if (balance < -1 && balanceFactor(root->right) <= 0)
        return leftRotate(root);

    // RL Case
    if (balance < -1 && balanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}


int main() {

    Node *root = NULL;
    int choice, key;

    while (1) {

        printf("\n====== AVL TREE ======\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display (Inorder)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                root = insert(root, key);
                break;

            case 2:
                if (root == NULL) {
                    printf("Tree is empty.\n");
                    break;
                }

                printf("Enter key to delete: ");
                scanf("%d", &key);
                root = delete(root, key);
                break;

            case 3:
                if (root == NULL) {
                    printf("Tree is empty.\n");
                    break;
                }

                printf("Enter key to search: ");
                scanf("%d", &key);
                search(root, key);
                printf("\n");
                break;

            case 4:
                if (root == NULL)
                    printf("Tree is empty.\n");
                else {
                    printf("AVL Tree (Inorder): ");
                    display(root);
                    printf("\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}



