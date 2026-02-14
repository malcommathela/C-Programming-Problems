//
// Created by malco on 02/07/2026.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed");
        exit(-1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;

}

Node *addToEmptyList(Node *last, int data) {
    if (last != NULL) return last;  // Already non-empty
    Node *newNode = createNode(data);
    last = newNode;
    last->next = last;  // point to itself
    return last;
}

Node *addToFront(Node *last, int data) {
    if (last == NULL) {
        return addToEmptyList(last, data);
    }

    Node *newNode = createNode(data);
    newNode->next = last->next; // Point to the current head
    last->next = newNode; // Last-next is head
    return last;
}

Node *addToEnd(Node *last, int data) {
    if (last == NULL) {
        return addToEmptyList(last, data);
    }
    Node *newNode = createNode(data);
    newNode->next = last->next; // Point to head
    last->next = newNode; // Old last points to new Node
    last = newNode; // update last
    return last;
}

Node *addAfter(Node *last, int data, int newData) {
    if (last == NULL) return NULL;

    Node *curr = last->next;
    do {
        if (curr->data == data) {
            Node *newNode = createNode(newData);
            newNode->next = curr->next;
            curr->next = newNode;

            if (curr == last) {
                last = newNode;  // If inserted after last
            }

            return last;
        }
        curr = curr->next;
    } while (curr != last->next);
    printf("Node with value %d not found\n", data);
    return last;
}

Node *deleteNode(Node *last, int key) {
    if (last == NULL) return NULL;
    Node *temp = last;
    Node *d;

    // Case: only one node
    if (last->data == key && last->next == last) {
        free(last);
        return NULL;
    }

    // If last node is to be deleted
    if (last->data == key) {
        while (temp->next != last) {
            temp = temp->next;
        }
        temp->next = last->next;
        free(last);
        return temp; // new last
    }

    // Search for node to delete
    while (temp->next != last && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next->data == key) {
        d = temp->next;
        temp->next = d->next;
        free(d);
    }else {
        printf("Node with value %d not found\n", key);
    }

    return last;

}

void freeList(Node* last) {
    if (last == NULL) return;

    Node* head = last->next;
    Node* curr = head;
    Node* next;

    do {
        next = curr->next;
        free(curr);
        curr = next;
    } while (curr != head);
}


void traverse(struct Node* last) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* p = last->next;
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != last->next);
    printf("\n");
}


int main() {
    struct Node* last = NULL;

    last = addToEmptyList(last, 6);
    last = addToEnd(last, 8);
    last = addToFront(last, 2);
    last = addAfter(last, 10, 2);

    printf("List: ");
    traverse(last);  // 2 10 6 8

    last = deleteNode(last, 8);
    printf("After deleting 8: ");
    traverse(last);  // 2 10 6

    freeList(last);



    return 0;
}


