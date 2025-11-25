#include <stdio.h>

int main ()
{
    int* a, b;
    b = 1;
    a = &b;
    b = 2;

    printf("%d\n", b);
    printf("%d", *a);

    return 0;
}

