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

int isParidromeString(const char* s){
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right){

        while(left < right && isalnum(s[left])){
            left++;
        }

        while(left < right && isalnum(s[right])){
            right--;
        }

        if(tolower(s[left]) != tolower(s[right])){
            return 0;
        }

        left++;
        right--;

    }

    return 1;
}


int main(){

    printf("Choose the following choices:\n\n1.Chech if a number is a paridrome\n2.Check if a string is a paridrome\n>> ");
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
    else if (choice == 2){

        char word_phrase[50];
        printf("Enter word or Phrase: ");
        fgets(word_phrase,sizeof(word_phrase),stdin);
        word_phrase[strlen(word_phrase) - 1] = '\0';

        while(getchar != '\0');

        if(isParidromeString(word_phrase)){
            printf("%S is a paridrome String",word_phrase);
        }
        else{
            printf("%S is not paridrome String",word_phrase);

        }


    }
    else{
        printf("Invalid Choice");

    }

    return 0;
}