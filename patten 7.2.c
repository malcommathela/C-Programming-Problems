#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 10)
        return 0;

    for (int i = N; i >= 1; i--) {

        // Last row uses same spaces as row 2
        int spaces = (i == 1) ? (N - 2) : (N - i);

        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }

        // Print i repeated i times
        for (int j = 0; j < i; j++) {
            printf("%d ", i);
        }

        if (i > 1)
            printf("\n\n");
    }

    return 0;
}


