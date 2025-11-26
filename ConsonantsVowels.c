//consonants vowels
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {

    char line[100];
    int vowels = 0;
    int consonants = 0;
    int digits = 0;

    printf("Enter a word/Sentence: ");
    fgets(line, sizeof(line), stdin);
    line[strlen(line) - 1] = '\0';

    for (int i = 0; line[i] != '\0'; i++) {
        line[i] = tolower(line[i]);
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o ' || line[i] == 'u') {
            vowels++;
        }
        else if (line[i] >='a' && line[i] <= 'z'){
            consonants++;
        }
        else if (line[i] >= 0 && line[i] <= '9') {
            digits++;
        }
        else {
            printf("Not a vowel\n");
            printf("Not a consonant\n");
            printf("Not a digit\n");
            printf("Maybe a Special Character\n");
        }

    }

    printf("%d vowels\n", vowels);
    printf("%d consonants\n", consonants);
    printf("%d digits\n", digits);

    return 0;

    




}
