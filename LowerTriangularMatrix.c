#include <stdio.h>

int main(){

    int r,c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);


    int a[r][c];
    int b[r][c];

    //Reading values into array 'a'
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
        
    }

    //Creating Lower Triangular Matrix 'b' from 'a'
    printf("Lower Triangular Matrix:\n");
    
    for( int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){

            if(i >= j){
                b[i][j] = a[i][j];
            }
            else{
                b[i][j] = 0;
            }

        }
        
    }
    
    
    
    //Printing the resulting array 'k'
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}