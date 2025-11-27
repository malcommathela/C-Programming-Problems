#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 4; // Number of rows in the pattern

    for (i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
