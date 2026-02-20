#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  // Store original number

    // Handle negative numbers
    if (num < 0) {
        printf("Reversed number: -");
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;          // Get last digit
        reversed = reversed * 10 + remainder;
        num = num / 10;                // Remove last digit
    }

    printf("%d\n", reversed);

    return 0;
}