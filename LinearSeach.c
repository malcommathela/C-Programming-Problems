#include <stdio.h>

int main(){
    int number[] = {10,13,17,23,27,28,34,46,57,73,83};
    int size = sizeof(number) / sizeof(number[0]);
    int target = 73;
    int flag = 0;

    for(int i = 0; i <= size;i++){
        if(number[i] == target){
            printf("Element found at index %d");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Element not found");
    }

    return 0;
}