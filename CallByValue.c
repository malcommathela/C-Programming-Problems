#include <stdio.h>
#include <math.h>


void update(int, int);

int main() {
    int a = 4;
    int b =9;
    update(a, b);
    printf("a: %db: %d\n", a,b);
    return 0;

}

void update(int a, int b) {
    int temp = a;
    a = a+b;
    b = abs(temp-b);
    printf("a= %db= %d\n", a,b);

}