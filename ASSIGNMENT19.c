#include <stdio.h>
#include <string.h>


struct EMPLOYEE {
    char name[50];
    char designation[30];
    char gender; 
    char doj[15]; 
    float salary;
};


void displayCounts(struct EMPLOYEE emp[], int n);
void highSalaryEmployees(struct EMPLOYEE emp[], int n);
void findAsstManagers(struct EMPLOYEE emp[], int n);

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];


    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender); 
        printf("Date of Joining (DD/MM/YYYY): ");
        scanf("%s", emp[i].doj);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

   
    printf("\n--- Report ---\n");
    printf("a) Total number of employees: %d\n", n);

    
    displayCounts(emp, n);

 
    highSalaryEmployees(emp, n);

    
    findAsstManagers(emp, n);

    return 0;
}


void displayCounts(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm') male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f') female++;
    }
    printf("b) Male Employees: %d, Female Employees: %d\n", male, female);
}


void highSalaryEmployees(struct EMPLOYEE emp[], int n) {
    printf("c) Employees with salary > 10,000:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("   - %s (Salary: %.2f)\n", emp[i].name, emp[i].salary);
            found = 1;
        }
    }
    if (!found) printf("   None found.\n");
}


void findAsstManagers(struct EMPLOYEE emp[], int n) {
    printf("d) Employees with designation 'Asst Manager':\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
       
   
        if (strcmp(emp[i].designation, "Asst_Manager") == 0 || strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("   - %s\n", emp[i].name);
            found = 1;
        }
    }
    if (!found) printf("   None found.\n");
}
