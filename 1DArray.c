#include <stdio.h>

int main(){

    //Initialising array
    int a[20],n;
    printf("Enter number of array elements: \n");
    scanf("%d",&n);


    //Assigning values to array
    printf("Enter %d array elements: \n", n);
    for(int i = 0; i <= n - 1 ; i++){
        scanf("%d",&a[i]);
    }

    //Printing Array elements
    for(int i = 0; i <= n - 1; i++){
        printf("%d ",a[i]);
    }


    return 0;





}