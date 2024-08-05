#include <stdio.h>

// Function prototype
int fibonacci(int n);

int main() {
    int num, i;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);
    
    printf("Fibonacci Series: ");
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base cases: F(0) = 0 and F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}
