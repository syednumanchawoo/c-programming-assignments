#include <stdio.h>

/* Function to calculate nCr efficiently */
unsigned long long calculate_nCr(int n, int r) {
    // If r is greater than n or negative, nCr is mathematically 0
    if (r < 0 || r > n) {
        return 0;
    }

    // Exploit symmetry property: nCr = nC(n-r)
    // This reduces the number of iterations in the loop
    if (r > n - r) {
        r = n - r;
    }

    unsigned long long result = 1;
    
    // Iteratively compute nCr
    for (int i = 0; i < r; i++) {
        result = result * (n - i);
        result = result / (i + 1);
    }
    
    return result;
}

int main() {
    int n, r;

    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    printf("Enter the value for r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Error: n must be greater than or equal to r, and both must be non-negative.\n");
    } else {
        unsigned long long nCr = calculate_nCr(n, r);
        printf("%dC%d = %llu\n", n, r, nCr);
    }

    return 0;
}