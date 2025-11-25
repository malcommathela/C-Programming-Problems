#include <stdio.h>

int main(){

    // Variables
    float fahrenheit,celcius;

    // User Input
    printf("Temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit - 32) / 1.8;

    //Output
    printf("Temperature in Celcius: %f",celcius);
    return 0;

}