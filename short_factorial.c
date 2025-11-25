//Program to calculate the factorial of a given number
#include <stdio.h>

int main(){

    int number, n = 1, i = 1;
    printf("Enter any Number: \n");
    scanf("%d",&number);
    
    for(;i<=number;n*=i,i++);
    printf("Factorial of %d is %d",number,n);

}