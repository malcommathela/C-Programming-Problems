#include <stdio.h>

int main(){
    
    //Initialising array
    int a[20],n;
    int sum = 0;
    printf("Enter number of array elements: \n");
    scanf("%d",&n);
    

    //Assigning values to array
    printf("Enter %d array elements: \n", n);
    for(int i = 0; i <= n - 1 ; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i <= n - 1; i++){
        sum += a[i];
    }

    

    //Printing Sum Of Array
    printf("Sum of array = %d", sum);

    return 0;





}