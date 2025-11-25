#include <stdio.h>

float const PI = 3.14;
int main(){
    float r,area;
    printf("Enter Radius:\n");
    scanf("%f",&r);
    area = PI * (r * r);
    printf("Area: %f",area);
    return 0;
}