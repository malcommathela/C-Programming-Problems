//
// Created by malco on 12/30/2025.
//

#include <stdio.h>

int findLcm(int a, int b) {

    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int a, b;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);

    printf("The LCM of %d & %d : %d",a,b,findLcm(a,b));
}
