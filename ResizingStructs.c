//
// Created by malco on 01/28/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

typedef struct {
    String name;
    int age;
} Student;


int main() {
    char name[100];
    int size = 3;
    Student *students = (Student *)malloc(size * sizeof(Student));
    if (!students) {
        fprintf(stderr,"Error allocating memory for students\n");
        exit(1);
    }

    printf("Enter Student details:\n");
    for (int i = 0; i < size; i++) {
        printf("========= STUDENT %d =============\n",i + 1);
        printf("Name: ");
        scanf("%s", name);
        students[i].name = name;
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // You can add students using the following
    // students[0] = (Student) {"Malcom",27};
    // students[1] = (Student) {"Bollow",86};
    // students[2] = (Student) {"Malloc",29};


    printf("Do you want to add another student: ");
    char answer[10];
    scanf("%s", answer);

    if (strcmp(answer, "Yes") == 0) {
        int temp = size;
        printf("Enter number of students to add:\n");
        scanf("%d", &size);

        Student *new_students = realloc(students, size * sizeof(Student));
        if (!new_students) {
            fprintf(stderr,"Error allocating memory for new_students\n");
            exit(1);
        }

        students = new_students;


        printf("Enter Student details:\n");
        for (int i = temp; i < size; i++) {
            printf("========= STUDENT %d =============\n",i + 1);
            printf("Name: ");
            scanf("%s", name);
            students[i].name = name;
            printf("Age: ");
            scanf("%d", &students[i].age);
        }



    }
    for (int i = 0; i < size; i++) {
        printf("======== STUDENT %d =============\n",i + 1);
        printf("Name: %s\n",students[i].name);
        printf("Age: %d\n",students[i].age);

    }

    free(students);




}