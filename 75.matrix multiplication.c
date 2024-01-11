// Write a program in C to perform matrix multiplication.
#include <stdio.h>
void multiplyMatrices(int Matrix1[][3], int Matrix2[][3], int resultMatrix[][3], int row1, int col1, int row2, int col2)
{
    // Initializing elements of resultMatrix to 0
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            resultMatrix[i][j] = 0;
        }
    }
    // Multiplying firstMatrix and secondMatrix and storing in resultMatrix
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                resultMatrix[i][j] += Matrix1[i][k] * Matrix2[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[][3], int row, int col) {
    printf("Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row1, col1, row2, col2;
    // Input dimensions of the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    // Input dimensions of the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    int Matrix1[row1][3], Matrix2[row2][3], resultMatrix[row1][3];
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &Matrix1[i][j]);
        }
    }
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &Matrix2[i][j]);
        }
    }
    multiplyMatrices(Matrix1, Matrix2, resultMatrix, row1, col1, row2, col2);
    printf("\n");
    // Displaying the matrices
    displayMatrix(Matrix1, row1, col1);
    printf("\nMultiplied by: \n\n");
    displayMatrix(Matrix2, row2, col2);
    printf("\nResult of multiplication of above two matrices : \n\n");
    displayMatrix(resultMatrix, row1, col2);
    return 0;
}
