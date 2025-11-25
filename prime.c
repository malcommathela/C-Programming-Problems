// #include <stdio.h>

// int is_prime(int num) {
    
//     if (num < 2) return 0;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }

// int main() {
//     int n, count = 0, candidate = 2;

//     printf("Enter how many prime numbers to print: \n");
//     scanf("%d", &n);

//     while (count < n) {
//         if (is_prime(candidate)) {
//             printf("%d ", candidate);
//             count++;
//         }
//         candidate++;
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

