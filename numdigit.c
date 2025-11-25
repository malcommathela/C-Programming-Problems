#include <stdio.h>

int main(){

    int n, count = 0;

    printf("Enter n value\n");
    scanf("%d",&n);


    while(n > 0){
        int remainder = n % 10;
        count++;
        n/=10;
    }

    printf("Number of digits : %d",count);
}