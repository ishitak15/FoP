#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, percentage;
    int i, passesAll = 1; // Flag: 1 means pass, 0 means fail

    printf("Enter marks for 5 courses (out of 100):\n");

    for (i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Check if student failed any subject
        if (marks[i] < 40) {
            passesAll = 0;
        }
        
        total += marks[i];
    }

    if (passesAll == 0) {
        printf("\nResult: FAIL (Scored less than 40 in one or more subjects)\n");
    } else {
        percentage = (total / 500) * 100;
        
        printf("\nTotal Marks: %.2f", total);
        printf("\nPercentage: %.2f%%", percentage);
        printf("\nResult: PASS");
        printf("\nGrade: ");

        // Grade assignment logic
        if (percentage >= 75) {
            printf("Distinction\n");
        } else if (percentage >= 60) {
            printf("First Division\n");
        } else if (percentage >= 50) {
            printf("Second Division\n");
        } else if (percentage >= 40) {
            printf("Third Division\n");
        } else {
            // This case handles passing each sub but having a low aggregate
            printf("Pass (No Division)\n");
        }
    }

    return 0;
}
