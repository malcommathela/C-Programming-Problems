//
// Created by malco on 02/18/2026.
//

#include <stdio.h>
#include <stdlib.h>


void countingSort(int arr[], int n, int k) {

    int *cnt = (int *)calloc(k + 1, sizeof(int));
    int *output = (int *)calloc(n, sizeof(int));

    // Step 1: Count frequencies
    for (int i = 0; i < k; i++) {
        cnt[arr[i]]++;
    }

    // Step 2: Cumulative sum
    for (int i = 1; i <= k; i++) {
        cnt[i] += cnt[i - 1];
    }

    // Step 3: Build sorted array (Stable: Back Transversal)
    for (int i = n - 1; i >= 0; i--) {
        int x = arr[i];
        output[cnt[x] - 1] = arr[i];
        cnt[x]--;
    }

    // Copy sorted array to original arr
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    free(cnt);
    free(output);

}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;  // max element

    countingSort(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
