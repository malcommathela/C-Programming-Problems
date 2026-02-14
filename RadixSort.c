//
// Created by malco on 02/14/2026.
//

#include <stdio.h>

// Get maximum value in the array
int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    return mx;
}

// Counting sort for a specific digit (exp = 1, 10, 100, ...)
void countSort(int arr[], int n, int exp) {
    int output[n];           // output array
    int count[10] = {0};     // count for digits 0–9

    // Count occurrences of each digit
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Change count[i] to actual position in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output array (stable: from right to left)
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy back to arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Main radix sort function
void radixsort(int arr[], int n) {
    int max = getMax(arr, n);

    // Do counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, n, exp);
    }
}

// Utility: print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Example usage
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original: ");
    printArray(arr, n);

    radixsort(arr, n);

    printf("Sorted:   ");
    printArray(arr, n);

    return 0;
}
