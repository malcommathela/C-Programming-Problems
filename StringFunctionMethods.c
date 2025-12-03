#include <stdio.h>
#include <String.h>

int main(void) {
    char str1[100]= "Raja", str2[100] = "Sunita",str3[100];

    //Length of Str1
    printf("Length of str1: %d\n",strlen(str1));

    //Concatination of str1 and str2
    printf("Concatenation of str1 and str2: %s\n",strcat(str1,str2));

    //Copying the values of str 1 to str3
    printf("Copying the value of str1 to str3=> str3: %s\n",strcpy(str3,str1));

    //Comparing str1 and str2
    printf("Comparing the values of str1 and str2:\n");

    if(strcmp(str1,str2)==0) {
        printf("Str1 and Str2 are equal");

    }else if (strcmp(str1,str3)!=0) {
        printf("Str1 and Str3 are not equal");
    }




}