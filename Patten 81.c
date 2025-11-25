#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    
    if (N < 1 || N > 10)
        return 0;

    int h = (N + 1) / 2;

    if (N & 1) {  // For odd N
        for (int i = 1; i <= N; i++) {
            if (i == h)
                printf("%d\n", i);
            else
                printf("%d %d\n", i, i);

            
        }

    } 
    else {  // For even N
        
        for (int i = 1; i <= N; i++) {

            int spaces=0;
            if (i <= h)
                spaces = i - 1;
            else
                spaces = N - i;

            for (int s = 0; s < spaces; s++)
                printf(" ");

            printf("%d %d\n\n", i, i);

        }

        // printf("\n");
    }

    return 0;
}
