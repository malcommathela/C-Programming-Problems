#include <stdio.h>

int main(){

    int r,c;
    int a[4][4];
    int b[4][4];
    int k[4][4];

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    //Reading values into array 'a'
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
        
    }

    //Reading values into array 'b'
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
        
    }

    //Adding arrays 'a' and 'b' and storing the result in array 'c'
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            k[i][j] = a[i][j] + b[i][j];
        }
        
    }
    //Printing the resulting array 'c'
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            printf("%d ", k[i][j]);
        }
        printf("\n");
        
    }


    return 0;
}