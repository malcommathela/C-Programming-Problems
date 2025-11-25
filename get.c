#include <stdio.h>
#include <stdbool.h>


int main() {
    

    // Enforce constraints

    int u = 0;
    bool isContinue = true;
    
    while(isContinue){

        int n;
        scanf("%d", &n);

        if (n < 1 || n > 10) return 0;

        if(n == u){
            isContinue = false;
            break;
        }

        int h=(n/2) + 1;
    
        for(int i=n;i>=1;i--){

            if(i==h){
                printf("%d\n",i);
            }

            else{
                printf("%d %d\n",i,i);
            }

            printf("\n");
        }

        u = n;

        // printf("###### %d ######",u);

    }

    
    return 0;
}