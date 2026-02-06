#include <stdio.h>

int main() {
    float basicPay, hra, ta, professionalTax, grossSalary, netSalary;
    
    printf("Enter basic pay: ");
    scanf("%f", &basicPay);
    
    // Calculate HRA (10% of basic pay)
    hra = basicPay * 0.10;
    
    // Calculate TA (5% of basic pay)
    ta = basicPay * 0.05;
    
    // Calculate Gross Salary
    grossSalary = basicPay + hra + ta;
    
    // Calculate Professional Tax (2% of gross salary)
    professionalTax = grossSalary * 0.02;
    
    // Calculate Net Salary
    netSalary = grossSalary - professionalTax;
    
    printf("\nBasic Pay: %.2f\n", basicPay);
    printf("HRA (10%%): %.2f\n", hra);
    printf("TA (5%%): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Professional Tax (2%%): %.2f\n", professionalTax);
    printf("Net Salary: %.2f\n", netSalary);
    
    return 0;
}