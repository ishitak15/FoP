#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], evenArr[n], oddArr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Partitioning logic
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Displaying Even Sublist
    printf("\nEven Sublist: ");
    if (evenCount == 0) {
        printf("None");
    } else {
        for (i = 0; i < evenCount; i++) {
            printf("%d ", evenArr[i]);
        }
    }

    // Displaying Odd Sublist
    printf("\nOdd Sublist: ");
    if (oddCount == 0) {
        printf("None");
    } else {
        for (i = 0; i < oddCount; i++) {
            printf("%d ", oddArr[i]);
        }
    }

    printf("\n");
    return 0;
}
