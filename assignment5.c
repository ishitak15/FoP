#include <stdio.h>
#include <stdlib.h>

void addition();
void saddlePoint();
void inverseMatrix();
void magicSquare();

int main() {
    int choice;
    while(1) {
        printf("\n--- Matrix Operations Menu ---");
        printf("\n1. Addition of Two Matrices");
        printf("\n2. Saddle Point of a Matrix");
        printf("\n3. Inverse of a Matrix (3x3)");
        printf("\n4. Magic Square Generation (Odd size)");
        printf("\n5. Exit");
        printf("\nSelect an option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addition(); break;
            case 2: saddlePoint(); break;
            case 3: inverseMatrix(); break;
            case 4: magicSquare(); break;
            case 5: exit(0);
            default: printf("Invalid choice!");
        }
    }
    return 0;
}

// 1. Addition of Two Matrices
void addition() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];

    printf("Enter elements of Matrix A:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &a[i][j]);
    
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &b[i][j]);

    printf("Resultant Matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// 2. Saddle Point (Min in Row, Max in Column)
void saddlePoint() {
    int n, i, j, k, min_row, col_ind, is_saddle;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int mat[n][n];

    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++) for(j=0; j<n; j++) scanf("%d", &mat[i][j]);

    for(i=0; i<n; i++) {
        min_row = mat[i][0];
        col_ind = 0;
        for(j=1; j<n; j++) {
            if(mat[i][j] < min_row) {
                min_row = mat[i][j];
                col_ind = j;
            }
        }

        is_saddle = 1;
        for(k=0; k<n; k++) {
            if(mat[k][col_ind] > min_row) {
                is_saddle = 0;
                break;
            }
        }

        if(is_saddle) {
            printf("Saddle Point found at (%d, %d): %d\n", i, col_ind, min_row);
            return;
        }
    }
    printf("No Saddle Point found.\n");
}

// 3. Inverse of a 3x3 Matrix
void inverseMatrix() {
    float a[3][3], det = 0;
    int i, j;
    printf("Enter 3x3 Matrix elements:\n");
    for(i=0; i<3; i++) for(j=0; j<3; j++) scanf("%f", &a[i][j]);

    // Finding Determinant
    for(i=0; i<3; i++)
        det = det + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]));

    if(det == 0) {
        printf("Inverse does not exist (Determinant = 0).\n");
        return;
    }

    printf("\nInverse Matrix is:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%.2f\t", ((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3])) / det);
        }
        printf("\n");
    }
}

// 4. Magic Square (Odd Order)
void magicSquare() {
    int n;
    printf("Enter odd order for Magic Square: ");
    scanf("%d", &n);
    if(n % 2 == 0) { printf("Order must be odd!\n"); return; }

    int magic[n][n];
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) magic[i][j] = 0;

    int r = 0, c = n/2;
    for(int num=1; num <= n*n; num++) {
        magic[r][c] = num;
        int next_r = (r - 1 + n) % n;
        int next_c = (c + 1) % n;
        
        if(magic[next_r][next_c] != 0) r = (r + 1) % n;
        else { r = next_r; c = next_c; }
    }

    printf("Magic Square of size %d:\n", n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) printf("%3d ", magic[i][j]);
        printf("\n");
    }
}
