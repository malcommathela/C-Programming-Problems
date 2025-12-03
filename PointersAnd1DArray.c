#include <stdio.h>

int main() {

    int a[] = {2,5,3,7,1,5,3,9};
    int *ptr = a;

    printf("Array Elements:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\n", *(ptr + i));
    }

    // for (int i = 0; i < 8; i++) {
    //     printf("%d ", a[i]);
    // }







    return 0;
}