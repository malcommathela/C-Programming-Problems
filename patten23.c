#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n < 1 || n >10){
        return 0;
    }

    for(int i = 1;i<=n;i++){
            
        for(int j = 0;j<i;j++){

            printf("%c ",'A'+ j);
            
        }

        printf("\n\n");
    }

    return 0;
}