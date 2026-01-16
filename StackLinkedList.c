//
// Created by malcom on 01/16/2026.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* top = NULL;

// Push Op
void push(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// Pop Op
void pop() {
    if (top == NULL) {
        printf("Stack is empty");
    }
    else {
        Node *temp = top;
        printf("%d Popped from stack\n", temp->data);
        top = top->next;
        free(temp);
    }
}

// Peek Op
int peek() {

    if (top ==NULL) {
        printf("Stack is empty");
        return -1;
    }
    printf("%d Peeked from stack\n", top->data);
    return top->data;

}

// Display = traversal from top to NULL.

void display() {
    if (top == NULL) {
        printf("Stack is empty");
    }
    else {
        Node *curr = top;
        printf("Printing elements from top to bottom\n");
        while (curr != NULL) {
            printf("%d\n", curr->data);
            curr = curr->next;
        }
    }
}
