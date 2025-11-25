#include <stdio.h>

int factorial(int n);
int main(){

    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d",factorial(x));

}

int factorial(int n) {

    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}