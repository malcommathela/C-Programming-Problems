#include <stdio.h>
#include <stdbool.h>

int main() {
    int prev = -1;           // previous valid input (initially impossible)
    bool running = true;

    while (running) {
        int n;
        if (scanf("%d", &n) != 1) // stop on EOF or invalid non-integer
            break;

        // If same as previous valid input -> terminate immediately
        if (n == prev)
            break;

        // Ignore values outside the valid range, do not update prev
        if (n < 1 || n > 10)
            continue;

        // Correct middle calculation for both odd and even n
        int mid = (n + 1) / 2;

        if(n % 2 == 0){

            for (int i = n; i >= 1; i--) {

                if (i == mid || i == mid + 1)
                    printf("%d\n", i);
                else
                    printf("%d %d\n", i, i);
                printf("\n");
            }



        }else{
            for (int i = n; i >= 1; i--) {

                if (i == mid)
                    printf("%d\n", i);
                else
                    printf("%d %d\n", i, i);
                printf("\n");
            }

        }

        

        // Print pattern
        
        // Update previous valid input after printing
        prev = n;
    }

    return 0;
}
