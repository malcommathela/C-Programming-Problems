//
// Created by malco on 02/14/2026.
//

#include <stdio.h>

void mergeSort(int arr[], int size);
void merge(int arr[], int right_array[], int left_array[], int size, int rightSize, int leftSize);

int main() {
    int array[] = {4,9,2,7,8,6,3,1,5};
    int size = sizeof(array) / sizeof(array[0]);

    mergeSort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}



void mergeSort(int arr[], int size) {

    if (size <= 1) return;

    int leftSize = size / 2;
    int rightSize = size - leftSize;

    int leftArray[leftSize];
    int rightArray[rightSize];

    int i = 0, j = 0;

    for (i = 0; i < size; i++) {
        if (i < leftSize) {
            leftArray[i] = arr[i];
        }else {
            rightArray[j] = arr[i];
            j++;
        }

    }

    mergeSort(leftArray, leftSize);
    mergeSort(rightArray, rightSize);
    merge(arr, rightArray, leftArray, size, rightSize, leftSize);

}

void merge(int arr[], int right_array[], int left_array[], int size, int rightSize, int leftSize) {

    int i = 0, l = 0, r = 0;
    while (l < leftSize && r < rightSize) {
        if (left_array[l] < right_array[r]) {
            arr[i] = left_array[l];
            i++;
            l++;
        }
        else {
            arr[i] = right_array[r];
            r++;
            i++;
        }
    }

    while (l < leftSize) {
        arr[i] = left_array[l];
        i++;
        l++;
    }
    while (r < rightSize) {
        arr[i] = right_array[r];
        r++;
        i++;
    }
}

