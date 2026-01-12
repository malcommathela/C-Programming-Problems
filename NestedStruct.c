//
// Created by malco on 01/12/2026.
//

#include <stdio.h>

#define PI 3.14

typedef struct {
    char city[20];
    int pincode;
}Address;

typedef struct {
    int rollno;
    char name[20];
    int age;
    Address address;
}Student;

int main() {
    Student student = {2524234,"Malcom",20,{"Kakinada",24983}};
    printf("%d\n", student.rollno);
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%s\n", student.address.city);
    printf("%d\n", student.address.pincode);
}
