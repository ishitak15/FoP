#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0)
        return 0;   // Factorial not defined for negative numbers
    
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors
void primeFactors(int n) {
    if (n <= 1) {
        printf("No prime factors.\n");
        return;
    }

    printf("Prime factors: ");

    // Divide by 2 first
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // Check odd numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If remaining number is prime
    if (n > 2)
        printf("%d", n);

    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Square root
    if (num >= 0)
        printf("Square root: %.2f\n", sqrt(num));
    else
        printf("Square root: Not defined for negative numbers\n");

    // Square
    printf("Square: %lld\n", (long long)num * num);

    // Cube
    printf("Cube: %lld\n", (long long)num * num * num);

    // Prime check
    if (isPrime(num))
        printf("The number is Prime.\n");
    else
        printf("The number is Not Prime.\n");

    // Factorial
    if (num >= 0)
        printf("Factorial: %llu\n", factorial(num));
    else
        printf("Factorial: Not defined for negative numbers\n");

    // Prime factors
    if (num > 1)
        primeFactors(num);
    else
        printf("Prime factors: Not applicable\n");

    return 0;
}