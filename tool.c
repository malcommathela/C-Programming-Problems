//
// Created by malco on 02/26/2026.
//

#include <stdio.h>
#include <stdlib.h>


void countSort(int arr[], int size, int exp) {
    int count[10] = {0};   // Count for digits 0 - 9
    int output[size];

    // Count frequencies
    for (int i = 0; i < size; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Cumulative sum
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output
    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy back to org array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }

}

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void radixSort(int arr[], int size) {
    int max = getMax(arr, size);

    // Do counting Sort for evry digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, size, exp);
    }
}





int main() {
    int array[] = {4,9,2,7,8,6,3,1,5};
    int size = sizeof(array) / sizeof(array[0]);
    int k = 8;

    radixSort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}