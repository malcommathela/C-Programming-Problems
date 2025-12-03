#include <stdio.h>

void update(int *a, int *b);
void swap(int *a, int *b);
int main() {

    int a = 50, b = 40;
    int *ptr1 = &a, *ptr2 = &b;

    // update(ptr1, ptr2);
    swap(ptr1, ptr2);
    printf("\n");
    printf("a: %d b: %d\n", a,b);
    return 0;
}

void update(int *a, int *b) {

    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    printf("a: %d b: %d\n", *a,*b);

}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a: %d b: %d\n", *a,*b);
}
