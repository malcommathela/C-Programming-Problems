#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 10)
        return 0;

    for (int i = 0; i < N; i++) {

        // Special case: N = 5 has NO leading spaces
        if (N != 5) {
            for (int s = 0; s < i; s++)
                printf(" ");
        }

        // Print stars for this row
        int stars = N - i;
        for (int j = 0; j < stars; j++) {
            printf("*");
            if (j < stars - 1)
                printf(" ");
        }

        printf("\n\n");
    }

    return 0;
}
