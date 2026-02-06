#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    printf("Sum of cubes of digits = %d\n", sum);

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
