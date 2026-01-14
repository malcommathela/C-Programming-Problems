//
// Created by malco on 01/13/2026.
//

#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue Operation
void enqueue(int data) {
    if (rear == MAX - 1) {
        printf("Queue Overflow");
    }else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = data;
        printf("%d inserted into queue\n", data);
    }
}

// Dequeue Operation
void dequeue() {
    if (front == -1) {
        printf("Queue is empty");
    }else {
        printf("%d dequeued from queue\n", queue[front++]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty");
    }else {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
    return 0;
}