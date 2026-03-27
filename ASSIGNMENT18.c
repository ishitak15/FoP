#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;
    while (low < high) {
        if (str[low++] != str[high--]) return false;
    }
    return true;
}

int main() {
    char str1[100], str2[100], sub[100];
    char temp[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    // i) Calculate length
    printf("\n1. Length of string: %zu", strlen(str1));

    // ii) String reversal
    strcpy(temp, str1); // Copy to temp so we don't mutate the original yet
    int n = strlen(temp);
    for (int i = 0; i < n / 2; i++) {
        char c = temp[i];
        temp[i] = temp[n - i - 1];
        temp[n - i - 1] = c;
    }
    printf("\n2. Reversed string: %s", temp);

    // iii) Equality check
    printf("\n\nEnter another string to compare: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("3. Result: Both strings are equal.");
    } else {
        printf("3. Result: Strings are not equal.");
    }

    // iv) Palindrome check
    if (isPalindrome(str1)) {
        printf("\n4. Palindrome: Yes, '%s' is a palindrome.", str1);
    } else {
        printf("\n4. Palindrome: No, '%s' is not a palindrome.", str1);
    }

    // v) Check substring
    printf("\n\nEnter a substring to search for: ");
    scanf("%s", sub);
    if (strstr(str1, sub) != NULL) {
        printf("5. Substring: '%s' found inside '%s'.\n", sub, str1);
    } else {
        printf("5. Substring: '%s' not found.\n", sub);
    }

    return 0;
}
