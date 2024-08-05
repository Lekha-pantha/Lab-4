#include <stdio.h>

// Function prototype
int power(int a, int n);

int main() {
    int base, exponent, result;

    // Input base and exponent from the user
    printf("Enter base (a): ");
    scanf("%d", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    // Calculate power using recursion
    result = power(base, exponent);

    // Print the result
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}

// Recursive function to calculate power
int power(int a, int n) {
    // Base case: anything to the power of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: multiply a by the result of power(a, n-1)
    return a * power(a, n - 1);
}
