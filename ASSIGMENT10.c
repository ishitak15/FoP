#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int choice;
    double a, b, result;
    int n, power, i;
    double powResult = 1;

    printf("CALCULATOR MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0)
                printf("Result = %.2lf\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;

        case 5:
            printf("Enter base and power: ");
            scanf("%d %d", &n, &power);
            for (i = 1; i <= power; i++) {
                powResult = powResult * n;
            }
            printf("Result = %.2lf\n", powResult);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n >= 0)
                printf("Factorial = %lld\n", factorial(n));
            else
                printf("Factorial not defined for negative numbers.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
