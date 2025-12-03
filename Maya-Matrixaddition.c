#include <stdio.h>

int main() {
    
    int N, M;
    printf("Enter the number of rows and columns of matrix:\n");
    scanf("%d %d", &N, &M);

    int A[N][M], B[N][M];

    // Input first matrix
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &A[i][j]);

    // Read the second "N M" again (since testcases include it)
    int n2, m2;
    printf("Enter the number of rows and columns of matrix:\n");
    scanf("%d %d", &n2, &m2);

    // Input second matrix
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &B[i][j]);

    // Add and print
    printf("Matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", A[i][j] + B[i][j]);
            if (j != M - 1) printf(" ");
        }
        if (i != N - 1) printf("\n");
    }

    return 0;
}