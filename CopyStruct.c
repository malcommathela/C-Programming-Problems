//
// Created by malco on 01/12/2026.
//

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1 = {1, "Rahul", 85.5};
    struct Student s2;

    // Copying structure
    s2 = s1;

    printf("Student 2 Details:\n");
    printf("Roll: %d\n", s2.roll);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}

// Explanation
// s1 and s2 are structure variables of the same structure type
//
// The statement
//
// c
// Copy code
// s2 = s1;
// copies all members of s1 into s2
//
// This is called structure assignment
//
// Works for:
//
// Integers
//
// Characters
//
// Arrays (like char name[20])
//
// Important Points (Exam Ready ⭐)
// Both structures must be of the same type
//
// Copying is done member by member automatically
//
// No need for strcpy() or manual copying
//
// Not allowed between different structure types
//
// One-Line Answer (Very Important)
// One structure variable can be copied to another structure variable of the same type using the assignment operator (=).














