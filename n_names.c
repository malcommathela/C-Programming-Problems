#include <stdio.h>

int main(){
    int n;
    char name[50];
    printf("Enter n value: \n");
    scanf("%d",&n);

    printf("Enter your name: \n");
    scanf(" %[^\n]*c",name);

    for (int i = 1; i<= n; i++){
        printf("%s\n",name);
    }

    return 0;

}