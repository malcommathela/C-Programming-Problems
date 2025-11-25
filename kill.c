#include <stdio.h>

int isParidrome(int n){
    
    if(n < 0) return 0;
    int org_num = n;
    int reversed_num = 0;

    while(n > 0){
        int digit = n % 10;
        reversed_num = reversed_num * 10 + digit;
        n/=10;
    }

    return org_num == reversed_num;
}


int main(){
    int n;
    printf("Enter any number: \n");
    scanf("%d",&n);

    if(isParidrome(n)){
        printf("%d is a paridrome",n);
    }
    else{
        printf("%d is not a paridrome",n);
    }
    return 0;
}