#include <stdio.h>

int main() {
    int arr[] = {1, 4, 2, 4, 7, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    for (i = 0; i < n; i++) {
        // Check if arr[i] is already duplicated before i
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == i) {
            // arr[i] is unique so far, print or store it
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
