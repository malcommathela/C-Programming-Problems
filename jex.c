#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++){

        if(N == 3){

            for(int j = 1; j <= N - i; j++) printf(" ");  

            for(int s = 0; s < i; s++){
                printf("*");
                if(s < i) printf(" ");

            }
        }
        else{

            for(int K = 0; K < i; K++){

                if(K) printf(" "); 
                printf("*");

            }

        }

        if(i != N) printf("\n");




    }
}