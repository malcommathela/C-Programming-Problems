#include <stdio.h>

int isPrime(int start,int end){

    for(int i =2; i * i <= start;i++){
        if(start % i == 0) return 0;
    }

    return 1;

}

int main(){

    int start;
    int end,count = 0;


    printf("Enter your start value:\n");
    scanf("%d",&start);
    
    printf("Enter your end value:\n");
    scanf("%d",&end);
    printf("--------------\n");

    while (start <= end) {

        if (isPrime(start,end) == 1) {
            printf("%d\n", start);
            
        }
        start++;
        count++;
    }
    printf("\n");

    return 0;



}