#include <stdio.h>

int main(){
    float b,h,area;
    printf("Enter Breadth and Height:\n");
    scanf("%f%f",&b,&h);
    area = 0.5 * b * h;
    printf("Area: %f",area);
    return 0;
}