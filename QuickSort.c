//
// Created by malco on 02/14/2026.
//

#include <stdio.h>


int partition(int arr[], int start, int end) {

    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    ++i;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;

}

void quickSort(int arr[], int start, int end) {
    if (end <= start) return;
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main() {
    int array[] = {4,9,2,7,8,6,3,1,5};
    int size = sizeof(array) / sizeof(array[0]);

    quickSort(array,0,  size - 1);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
