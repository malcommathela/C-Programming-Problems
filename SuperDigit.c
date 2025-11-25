#include <stdio.h>

int superdigit(int number);

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    printf("%d",superdigit(number));
}

int superdigit(int number) {

    if (number < 10)
        return number;

    return superdigit((superdigit(number / 10) + superdigit(number % 10)));

}




