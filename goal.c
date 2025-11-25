#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int h=n/2;
    if(n&1){

        for(int i=0;i<n;i++){

            if (n == 3){

                for (int j = 0; j < n; j++) {

                    if (i == j || i + j == n-1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n\n");


            }else if(i==h)
            printf("*\n");
            else
            printf("* *\n");
        }

    }
    else{
        int c=0;
        int f=0;

        for(int i=0;i<n;i++)
        {

            
            if(i<h)
            {

                for(int j=0;j<i;j++){

                    printf(" ");
                }

                if(i==h-1){ 
                    printf("**\n");
                }
                else printf("* *\n");
                c++;
            }
            if(i>=h)
            {
                for(int j=n-1-i;j>0;j--)
                {
                    printf(" ");
                }
                if(i==h)
                printf("**\n");
                else
                printf("* *\n");
                c--;
            }
            
            printf("\n");
        }
        

    }



}