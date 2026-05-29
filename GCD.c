//
// Created by malco on 03/14/2026.
//


#include <stdio.h>

int gcd(int a, int b) {

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {

    printf("Enter any 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("The GCD of %d and %d is: %d \n", a, b, gcd(a, b));

    return 0;
}
