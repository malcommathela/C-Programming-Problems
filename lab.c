#include <stdio.h>

int main() {
    int N;
    if(scanf("%d", &N) != 1){
        return 1;
    }

    // Enforce constraints
    if (N < 1 || N > 10)
        return 0;

    for (int i = 1; i <= N; i++){
        for (int j = 0; j < i; j++){
            printf("%c", 'A' + j);
            if (j != i - 1)
                printf(" "); // print space between characters, not after last
        }
        if (i != N)
            printf("\n\n"); // prevent extra newline at end
    }

    return 0;
}

