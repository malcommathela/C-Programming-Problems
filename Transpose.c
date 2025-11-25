#include <stdio.h>

int main(){

    //how to transpose a matrix
    int r,c;
    int a[4][4];
    int trans[4][4];   
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
        
    }
    //transposing
    for (int i = 0; i < r; i++){

        for (int j = 0; j < c; j++){    
            trans[j][i] = a[i][j];
        }
    }
    //printing transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++){            
        for (int j = 0; j < r; j++){
            printf("%d ", trans[i][j]);
        }   
        printf("\n");
    }


    return 0;
}