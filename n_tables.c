#include <stdio.h>

int main(){
    int n;
    printf("Enter N value: \n");
    scanf("%d",&n);

    for (int i = 0; i<= n; i++){

        for(int k =0;k<=n;k++){
            printf("%d x %d = %d\n",i,k,i*k);
        }
        printf("\n");
        
    }

    return 0;

}