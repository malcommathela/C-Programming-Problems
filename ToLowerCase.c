//
// Created by malco on 11/26/2025.
//

#include <ctype.h>
#include <stdio.h>

int main() {
    char line[100],lowercase[100];
    printf("Enter a word/Sentence: ");
    fgets(line,100,stdin);

    for (int i = 0; line[i] != '\0'; i++) {
        lowercase[i] = tolower(line[i]);
        printf("%c ",lowercase[i]);
    }



}