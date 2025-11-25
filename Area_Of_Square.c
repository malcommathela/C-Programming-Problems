#include <stdio.h>
#include <math.h>

int main(){
    float s,area;
    printf("Enter Side:\n");
    scanf("%f",&s);
    area = pow(s,2);
    printf("Area: %f",area);
    return 0;
}