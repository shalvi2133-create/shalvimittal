// Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int mat1[r1][c1];

    printf("Enter %d elements of first matrix:\n", r1 * c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    // Input dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added (different dimensions).");
        return 0;
    }

    int mat2[r2][c2], sum[r1][c1];

    printf("Enter %d elements of second matrix:\n", r2 * c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    // Add matrices
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    // Print sum matrix
    printf("Sum of matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
