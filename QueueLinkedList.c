//
// Created by malco on 01/13/2026.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *front = NULL;
Node *rear = NULL;

// Enqueue Op
void enqueue(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    }
    rear->next = newNode;
    rear = newNode;
    printf("%d enqueued int the queue\n", value);
}


// Dequeue Op
void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
    }else {
        Node *temp = front;
        front = front->next;

        // If the queue becomes empty
        if (front == NULL) {
            rear = NULL;
        }
        free(temp);
    }

}

// Display Op
void display() {

    if (front == NULL) {
        printf("Queue is empty\n");
    }else {
        Node *temp = front;
        printf("Queue Elements:\n");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
