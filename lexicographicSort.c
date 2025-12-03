#include <stdio.h>
#include <String.h>

int main() {
    char str1[100][100], temp[100];
    int n;

    printf("Enter number of strings your want to store:\n");
    scanf("%d", &n);


    printf("Enter Strings you want to sort:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%s", str1[i]);
    }

    printf("Strings before sorting:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", str1[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j =i + 1; j < n; j++) {

            if (strcmp(str1[i], str1[j]) > 0) {
                strcpy(temp, str1[i]);
                strcpy(str1[i], str1[j]);
                strcpy(str1[j], temp);

            }

        }
    }

    printf("Strings After sorting:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", str1[i]);
    }
}