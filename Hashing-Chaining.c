#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Structure for linked list node
typedef struct Node {
    int key;
    struct Node *next;
} Node;

// Initialize hash table
void initialize(Node *table[]) {
    for (int i = 0; i < SIZE; i++) {
        table[i] = NULL;
    }
}

// Hash function
int hash(int key) {
    return key % SIZE;
}

// Insert key
void insert(Node *table[], int key) {
    int index = hash(key);

    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->key = key;
    newNode->next = table[index];
    table[index] = newNode;

    printf("Key %d inserted at index %d.\n", key, index);
}

// Search key
void search(Node *table[], int key) {
    int index = hash(key);
    Node *current = table[index];

    while (current != NULL) {
        if (current->key == key) {
            printf("Key %d found at index %d.\n", key, index);
            return;
        }
        current = current->next;
    }

    printf("Key not found.\n");
}

// Delete key
void deleteKey(Node *table[], int key) {
    int index = hash(key);

    Node *current = table[index];
    Node *prev = NULL;

    while (current != NULL) {
        if (current->key == key) {

            if (prev == NULL)
                table[index] = current->next;
            else
                prev->next = current->next;

            free(current);
            printf("Key %d deleted from index %d.\n", key, index);
            return;
        }

        prev = current;
        current = current->next;
    }

    printf("Key not found.\n");
}

// Display hash table
void display(Node *table[]) {
    printf("\nHash Table:\n");

    for (int i = 0; i < SIZE; i++) {
        printf("[%d] -> ", i);

        Node *current = table[i];

        while (current != NULL) {
            printf("%d -> ", current->key);
            current = current->next;
        }

        printf("NULL\n");
    }
}

// Main function
int main() {
    Node *table[SIZE];
    initialize(table);

    int choice, key;

    while (1) {
        printf("\n====== HASH TABLE MENU ======\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(table, key);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(table, key);
                break;

            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteKey(table, key);
                break;

            case 4:
                display(table);
                break;

            case 5:
                printf("Exiting...\n");

                // Free allocated memory
                for (int i = 0; i < SIZE; i++) {
                    Node *current = table[i];
                    while (current != NULL) {
                        Node *temp = current;
                        current = current->next;
                        free(temp);
                    }
                }

                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}