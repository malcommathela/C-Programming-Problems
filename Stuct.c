#include <stdio.h>

typedef struct {
    char name[20];
    int age;
}Person;


void updateStruct(Person *p,int age) {
    p->age = age;
}

int main() {

    Person low = {"John", 20};
    updateStruct(&low, 90);
    printf("Name: %s\n", low.name);
    printf("Age: %d\n", low.age);

}