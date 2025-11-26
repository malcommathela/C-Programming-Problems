#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    //scanf("%[^\n]s",line);
    fgets(line,sizeof(line),stdin);
    line[strlen(line)-1] = '\0'; //Assigning a  Null Pointer at the end of the string.

    for(int i = 0;line[i] != '\0'; i++) {
        if (line[i] == ' ')
            printf("\n");
        else printf("%c",line[i]);
    }
    return 0;
}