#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isParidromeNumber(int n){
    int og_num = n;
    int reversed_num = 0;

    if (n < 0){
        return 0;
    }

    while(n > 0){
        int digit = n % 10;
        reversed_num = reversed_num * 10 + digit;
        n/=10;
    }
    return og_num == reversed_num;
}

void isParidromeString(char s[]){
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right) {

        if (s[left++] != s[right--]) {
            printf("%s is not a palindrome",s);
            return;
        }
    }

    printf("%s is a palindrome",s);
}


int main() {
    printf("Choose the following choices:\n\n1.Check if a number is a palindrome\n2.Check if a string is a palindrome\n>> ");
    int choice;
    scanf("%d",&choice);
    if(choice == 1){
        
        int number;
        printf("Enter Number: ");
        scanf("%d",&number);

        if(isParidromeNumber(number)){
            printf("%d is a paridrome number",number);
        }
        else{
            printf("%d is not paridrome number",number);

        }

    }

    else if (choice == 2) {

        char word_phrase[50];
        printf("Enter word or Phrase: ");
        fgets(word_phrase,sizeof(word_phrase),stdin);
        word_phrase[strlen(word_phrase) - 1] = '\0';
        isParidromeString(word_phrase);

    }
    else {
        printf("Invalid choice");
    }

    return 0;
}

