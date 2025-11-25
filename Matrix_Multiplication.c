#include <stdio.h>

int main(){

    int r1,c1,r2,c2;
    
    printf("Enter number of rows of First array: ");
    scanf("%d", &r1);
    printf("Enter number of columns of First array: ");
    scanf("%d", &c1);

    printf("Enter number of rows of Second array: ");
    scanf("%d", &r2);
    printf("Enter number of columns of Second array: ");
    scanf("%d", &c2);


    if(c1 != r2){
        printf("IMPOSSIBLE TO CALCULATE SUCH TWO MATRICES ");
        return 0;
    }

    int a[r1][c1];
    int b[r2][c2];
    int k[r1][c2];

    //Reading values into array 'a'
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++){

        for (int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
        
    }

    //Reading values into array 'b'
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++){

        for (int j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
        
    }

    //Multiply arrays 'a' and 'b' and storing the result in array 'c'
    printf("Resultant matrix after Multiplication:\n");
    for(int i = 0; i < c1; i++){
        for(int j = 0; j < r2; j++){
            k[i][j] = 0;
            for(int g = 0; g < c1; g++){
                k[i][j] += a[i][g] * b[g][j];
            }
        }
    }


    //Printing the resulting array 'c'
    for (int i = 0; i < r1; i++){

        for (int j = 0; j < c2; j++){
            printf("%d ", k[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}