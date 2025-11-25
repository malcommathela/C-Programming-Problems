#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter N value: \n");
    scanf("%d",&n);

    for (int i = 0; i<= n; i+=2){
        sum+=i;
    }
    printf("Sum: %d",sum);

    return 0;

}