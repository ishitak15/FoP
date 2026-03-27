#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char str1[100], str2[100];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. String Length (strlen)");
        printf("\n2. String Copy (strcpy)");
        printf("\n3. String Concatenation (strcat)");
        printf("\n4. String Comparison (strcmp)");
        printf("\n5. Reverse String (strrev - custom/logic)");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        clearBuffer();

        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                printf("Length: %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("String copied! Destination: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter string to append: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated Result: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0)
                    printf("Result: Strings are identical.\n");
                else
                    printf("Result: Strings are different.\n");
                break;

            case 5:
                printf("Enter string to reverse: ");
                scanf("%s", str1);
             
                int len = strlen(str1);
                printf("Reversed: ");
                for (int i = len - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
