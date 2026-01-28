#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


// Get data at index
int get(Node *head, int index) {

    Node *curr = head;
    int i = 0;
    while (curr != NULL) {
        if (i == index) {
            return curr->data;
        }
        i++;
        curr = curr->next;
    }
    return -1;
}

//Insert at head
Node *insertAThead(Node *head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return newNode;

}

// Insert at Tail
Node *insertAtTail(Node *head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
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

// Insert at Index
Node *insertAtIndex(Node *head, int data, int index) {

    // Case 1: Insert at beginning
    if (index == 0) {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = head;
        return newNode;
    }


    Node *temp = head;
    // Traverse to (index - 1) position
    int i = 0;
    while (i < index - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    // Index out of range
    if (temp == NULL) {
        printf("Index out of range");
        return head;
    }

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;

}

// Delete At head
Node *deleteAtHead(Node *head) {

    // Case 1: Empty list
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    // Case 2: Only one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    // Case 3: More than one node
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

//Delete at index
Node *deleteAtIndex(Node *head, int index) {

    if (head == NULL) {
        printf("List is empty");
        return head;
    }

    if (index == 0) {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    int i = 0;
    while (i < index - 1 && temp->next != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp->next == NULL) {
        printf("Index out of range");
        return head;
    }

    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    return head;

}

// Delete at tail
Node *deleteAtTail(Node *head) {

    //If list is empty
    if (head == NULL) {
        printf("List is empty");
        return head;
    }

    //If list has one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    //If more than one Node
    Node *temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;


}

