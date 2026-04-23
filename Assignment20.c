#include <stdio.h>

// 1. Function using pointers (Pass-by-Reference)
// This actually swaps the values in the caller's memory.
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Function without pointers (Pass-by-Value)
// This only swaps local copies; the originals remain unchanged.
void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("   Inside swapWithoutPointers: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Original values: x = %d, y = %d\n\n", x, y);

    // Testing Without Pointers
    printf("Testing swapWithoutPointers...\n");
    swapWithoutPointers(x, y);
    printf("After swapWithoutPointers: x = %d, y = %d (No change!)\n\n", x, y);

    // Testing With Pointers
    printf("Testing swapWithPointers...\n");
    swapWithPointers(&x, &y); // Passing the addresses of x and y
    printf("After swapWithPointers: x = %d, y = %d (Swapped successfully!)\n", x, y);

    return 0;
}
