//
// Created by malco on 01/13/2026.
//

#include  <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

/// Push Operation
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow");
    }else {
        stack[++top] = x;
        printf("%d Pushed into stack\n", x);
    }
}


// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow");
    }else {
        printf("%d Popped from stack\n", stack[top--]);
    }
}


// Peek operation

void peek() {
    if (top == -1) {
        printf("Stack is Empty");
    }else {
        printf("%d Peeked from stack\n", stack[top]);
    }
}

// Display Stack
void display() {
    if (top == -1) {
        printf("Stack is Empty");
    }else {
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    display();
    return 0;
}

