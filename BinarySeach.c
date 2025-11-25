//Binary Search is a searching technique that searches an element in a sorted array
//

#include <stdio.h>


int BinarySearch(int arr[],int size,int target){

    int low = 0;
    int high = size - 1;
    int mid;
    
    while(low <= high){
        
        int mid = (high + low) / 2;

        if(target == arr[mid]){
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = low + 1;
        }
        else{
            high = mid - 1;

        }

    }

    return -1;

}

int main(){

    int number[] = {10,13,17,23,27,28,34,46,57,73,83};
    int size = sizeof(number) / sizeof(number[0]);
    int target = 73;

    int result = BinarySearch(number,size,target);

    if(result != -1){
        printf("Element %d found at index %d",target,result);
    }
    else{
        printf("Element %d not found",target);
    }

    return 0;

}