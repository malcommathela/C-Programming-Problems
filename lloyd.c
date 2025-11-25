#include <stdio.h>

/**
 * Solves a single test case: counts the number of pairs (arr[i], arr[j]) 
 * such that (arr[i] + arr[j]) is divisible by 2.
 * * Logic: A sum is even only if both numbers have the same parity (Even+Even or Odd+Odd).
 * We count evens (CE) and odds (CO) and use the combination formula nC2 = n * (n - 1) / 2.
 */
void solve() {
    int N;
    // Read N (length of array)
    if (scanf("%d", &N) != 1 || N < 2) {
        return;
    }

    // Use long long for counts and final result to prevent overflow.
    long long even_count = 0;
    long long odd_count = 0;
    int element;

    // Step 1: Read the array elements and count evens and odds.
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &element) != 1) {
            return;
        }
        
        // Check parity and increment the corresponding counter.
        if (element % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    // Step 2: Calculate the number of pairs using the combination formula nC2.
    // We calculate pairs directly, knowing that if count < 2, the result is 0.

    // Pairs from two even numbers: even_count * (even_count - 1) / 2
    long long pairs_E_E = (even_count * (even_count - 1)) / 2;
    
    // Pairs from two odd numbers: odd_count * (odd_count - 1) / 2
    long long pairs_O_O = (odd_count * (odd_count - 1)) / 2;
    
    // The total count is the sum.
    long long total_pairs = pairs_E_E + pairs_O_O;
    
    printf("%lld\n", total_pairs);
}

int main() {
    int T;
    // Read T (number of test cases)
    if (scanf("%d", &T) != 1) {
        return 1;
    }

    for (int i = 0; i < T; i++) {
        solve();
    }

    return 0;
}
