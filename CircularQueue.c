//
// Created by malco on 01/13/2026.
//

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

//Enqueue
void enqueue(int data) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is full");
    }else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = data;
        printf("%d inserted\n", data);
    }
}

// Dequeue
void dequeue() {
    if (front == -1) {
        printf("Queue is empty");
    }else if (front == rear) {
        printf("%d dequeued\n", queue[front]);
        front = rear = -1;
    }else {
        printf("%d dequeued\n", queue[front]);
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty");
    }
    else {
        int i = front;
        printf("Queue elements : \n");
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]);
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