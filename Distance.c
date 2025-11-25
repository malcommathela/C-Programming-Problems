#include <stdio.h>
#include <math.h>

int main(){

    float initial_velocity,time,accelaration,distance;
    printf("Enter Initial Velocity, Time, Accelaration:\n");
    scanf("%f%f%f",&initial_velocity,&time,& accelaration);

    distance = (initial_velocity * time) + 0.5 * (accelaration*pow(time,2));
    printf("distance: %f",distance);
    return 0;
}