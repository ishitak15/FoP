#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int n, i;
    int lower = 1, upper = 100;

   
    srand(time(0));

    printf("How many random numbers do you want to generate? ");
    scanf("%d", &n);

    printf("\nRandom numbers between %d and %d:\n", lower, upper);

    for (i = 0; i < n; i++) {
       
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }

    printf("\n");

    return 0;
}
