#include <stdio.h>



int main () {
    int s[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int v[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int f[3][3];

    //Sum of two arrays
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            f[i][j] = s[i][j] + v[i][j];
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }

    return 0;

}