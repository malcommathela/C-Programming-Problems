#include <stdio.h>

int main(){

    int start;
    int end;
    int f = 2;


    printf("Enter your start value:\n");
    scanf("%d",&start);
    
    printf("Enter your end value:\n");
    scanf("%d",&end);

    for (int i = start; i < end; i++){
        f=2;

        for(int j = 2; j < i; j++){

            if(i % j == 0) {
                f++; 
                break;
            }

        }

        if (f == 2){
            printf("%d\n",i);
        }

    }

    return 0;
}