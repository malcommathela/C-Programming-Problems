//
// Created by malco on 01/12/2026.
//

#include <stdio.h>

typedef struct  {
    int rollno;
    char name[20];
    int age;
    int mark;
}Student;

int main() {

    int n;
    int total = 0;
    printf("Enter the number of students\n");
    scanf("%d",&n);

    Student student[n];

    for (int i = 0; i < n; i++) {

        printf("Enter student rollno\n");
        scanf("%d",&student[i].rollno);

        printf("Enter student name\n");
        scanf("%s",&student[i].name);

        printf("Enter student age\n");
        scanf("%d",&student[i].age);

        printf("Enter student mark\n");
        scanf("%d",&student[i].mark);

        total+=student[i].mark;

    }

    float average = total/n;
    printf("The total marks is %d\n", total);
    printf("The average marks is %.2f\n",average);

    return 0;

}