#include <stdio.h>

main() {
    int row, col;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

   
}