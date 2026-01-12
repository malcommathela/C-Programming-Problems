//
// Created by malco on 01/12/2026.
//

#include <stdio.h>

typedef struct {
    char model[20];
    int year;

}Car;

int main() {
    Car car[] = {
        {"honda",2000},
        {"Toyota",2022},
        {"Lotus",2024}
    };

    for (int i = 0; i < sizeof(car)/sizeof(Car); i++) {
        printf("Model: %s, Year: %d\n", car[i].model,car[i].year);
    }
}