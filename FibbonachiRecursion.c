#include <stdio.h>

long fibonacci(int i);

int main() {

    int x;

    printf("Enter a Fibonacci number to find?:  ");
    scanf("%d",&x);

    //Printing the n fibonacci Sequence
    for (int i=0;i<=x;i++) {
        printf("%d ", fibonacci(i));
    }

    //Printing the n fibonacci
    printf("%d", fibonacci(x));

}

long fibonacci(int i) {
    if (i <= 1)
        return i;

    return fibonacci(i-1) + fibonacci(i-2);



}
