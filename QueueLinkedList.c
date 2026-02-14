#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *enqueue(Node *head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int dequeue(Node *head) {
    if (head == NULL) {
        printf("Queue is empty\n");
        return -1;
    }

    Node *temp = head;
    int value = temp->data;
    head = head->next;
    free(temp);
    return value;
}

//Display Op
void printQueue(Node *head) {
    if (head == NULL) {
        printf("Queue is empty\n");
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node *head = NULL;

    head = enqueue(head, 10);
    head = enqueue(head, 20);
    head = enqueue(head, 30);

    printQueue(head);  // 10 20 30

    int val = dequeue(head);
    printf("Dequeued: %d\n", val);  // 10
    printQueue(head);               // 20 30

    return 0;
}



