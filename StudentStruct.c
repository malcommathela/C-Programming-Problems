//
// Created by malco on 01/12/2026.
//

#include <stdio.h>
#include <string.h>

typedef struct {

    char name[20];
    int marks[5];

}Student;

int main() {
    Student student;
    int total = 0;

    printf("Enter the name of the student\n");
    fgets(student.name,20,stdin);
    student.name[strlen(student.name)-1] = '\0';

    printf("Enter the marks of the student\n");
    for(int i=0;i<5;i++) {
        scanf("%d",&student.marks[i]);
    }

    printf("The name of the Student is: %s\n",student.name);
    for(int i=0;i<5;i++) {
        total+=student.marks[i];
    }
    printf("The total marks are: %d\n",total);

}