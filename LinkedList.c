//
// Created by malco on 01/15/2026.
//

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node *next;
};


// Insert at the Beginning

struct Node* insertBegin(struct Node* head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->next = head;
    return newNode;
}


// Insert at the end

struct Node* insertEnd(struct Node* head, int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Delete at the beginning
struct Node* deleteBegin(struct Node* head) {
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Insert at a position

struct Node* insertPos(struct Node* head, int val, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = val;

    if (pos == 1) {
        newNode -> next = head;
    }

    struct Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;

}


// Display  the list

void display(struct Node* head) {
    struct Node* temp = head;
    printf("List is :\n");
    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}



int main() {
    struct Node* head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    display(head);
    return 0;
}







