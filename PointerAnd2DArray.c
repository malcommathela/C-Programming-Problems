#include <stdio.h>

int main() {

    int a[3][3] = {2,5,3,7,1,5,3,9,5};
    int (*ptr)[3] = a;

    printf("Array Elements:\n");
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr+i)+ j));
        }
        printf("\n");
    }
    return 0;
}