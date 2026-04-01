#include <stdio.h>

int main() {
    int i, n;
    float x, degree, term, sum;

    printf("Enter the angle in degrees: ");
    scanf("%f", &degree);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    x = degree * (3.14159 / 180.0);

    
    term = x;
    sum = x;

   
    for (i = 1; i < n; i++) {
       
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum = sum + term;
    }

    printf("Sum of the sine series for %f degrees is: %f\n", degree, sum);

    return 0;
}
