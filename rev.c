#include <stdio.h>

int main()
{
    int n = 153;
    int r =0;

    for(;n!= 0; r =r*10 + (n % 10), n/=10);

    printf("%d",r);


    return 0;
}

// #include <stdio.h>

// // Recursive function to reverse a number
// int reverseNumber(int num, int rev) {
//     if (num == 0)
//         return rev;
//     return reverseNumber(num / 10, rev * 10 + num % 10);
// }

// int main() {
//     int num, result;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     result = reverseNumber(num, 0);
//     printf("Reversed number: %d\n", result);

//     return 0;
// }

