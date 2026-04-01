#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", s[i].name); // Use %s for a single word name
        
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display the results
    printf("\n--- Student Results ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++) {
        // %-20s aligns text to the left for a neat table look
        printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
