#include <stdio.h>
#include <string.h>

int main(){
    char local[50] = "";
    printf("Enter Text: ");
    fgets(local,sizeof(local),stdin);
    local[strlen(local) - 1] = '\0';

    printf("Local: %s",local);
    return 0;
}