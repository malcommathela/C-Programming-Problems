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
                printf("%d", i);
            else
                printf("%d %d", i, i);

            if(i != N)
                printf("\n");

            
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

            printf("%d %d", i, i);
            
            if(i != N)
                printf("\n\n");

        }

        
    }

    return 0;
}
