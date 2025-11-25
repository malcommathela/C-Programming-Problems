#include <stdio.h>
#include <math.h>


int count(int digit){

    if (digit == 0){
        return 1;
    }

    int count = 0;
    int result = digit;

    while(result != 0){
        result /= 10; 
        count++;
    }

    return count;
}

int isArmStrong(int digit){

    if(digit < 0){
        return 0;
    }

    int original_num = digit;
    int sum = 0;
    int number_of_digits = count(digit);

    while(digit > 0){
        digit = digit % 10;
        sum+=pow(digit,number_of_digits);
        digit/=10;
    }

    return sum == original_num ? 1 : 0;

}


int main(){

    int digit;
    printf("Enter Digit: ");
    scanf("%d",&digit);

    printf("%d",count(digit));
    return 0;

}