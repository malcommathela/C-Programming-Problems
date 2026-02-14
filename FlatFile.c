#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char city[20];
    int pincode;
}Address;

typedef struct {
    int rollno;
    char name[20];
    int marks;
    Address address;
} Student;

int main() {

    int n = 0;
    printf("Enter number of Students: \n");
    scanf("%d", &n);

    Student *student = (Student*)malloc(n * sizeof(Student));

    FILE *fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("File could not be created.\n");
        exit(1);
    }

    if (student == NULL) {
        printf("Not enough memory\n");
        exit(1);
    }


    for (int i = 0; i < n; i++) {
        printf("===================Enter Student %d details ==================\n",i + 1);
        printf("Enter rollno: \n");
        scanf("%d", &student[i].rollno);
        fprintf(fp, "Rollno: %d\n", student[i].rollno);

        printf("Enter name: \n");
        scanf(" %s", student[i].name);
        fprintf(fp, "Name: %s\n", student[i].name);

        printf("Enter marks: \n");
        scanf("%d", &student[i].marks);
        fprintf(fp, "Marks: %d\n", student[i].marks);

        printf("Enter City: \n");
        scanf("%s", student[i].address.city);
        fprintf(fp, "City: %s\n", student[i].address.city);

        printf("Enter pincode: \n");
        scanf("%d", &student[i].address.pincode);
        fprintf(fp, "Pincode: %d\n", student[i].address.pincode);

        fprintf(fp,"===================================\n\n");
    }

    int sum = 0;
    float average = 0;

    for (int i = 0; i < n; i++) {
        sum += student[i].marks;
    }

    average = (float) sum / (float) n;

    printf("Total marks: %d\n",sum);
    printf("Average: %.2f\n", average);

    free(student);
    fclose(fp);


}


