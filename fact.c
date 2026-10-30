#include <stdio.h>

int main() {
    int n, i;
    // Using 'unsigned long long' to handle larger results safely
    unsigned long long fact = 1; 

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // Multiplies fact by the loop counter
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
