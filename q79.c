// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter %d elements of the matrix:\n", rows * cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal: ");

    
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = (d < rows) ? d : rows - 1;
        int c = d - r;

        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
    }

    return 0;
}
