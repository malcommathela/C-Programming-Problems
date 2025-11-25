#include <stdio.h>

int main(){

    //Initialising array
    int min,max;
    int number[] = {13,17,23,27,28,34,46,57,10,73,83};
    
    max = number[0];
    min = number[0];

    //Min
    for(int i = 1; i<=sizeof(number) / sizeof(number[0]) - 1; i++){

        if(number[i] < min){
            min = number[i];
        }
    }


    //Max
    for(int i = 1; i<=sizeof(number) / sizeof(number[0]) - 1; i++){

        if(number[i] > max){
            max = number[i];
        }
    }

    printf("Min: %d\n",min);
    printf("Max: %d",max);
    


    return 0;





}