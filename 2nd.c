#include <stdio.h>

void rotateMatrix(int matrix[3][3]) {
    // Rotate the matrix by 90 degrees clockwise
    for (int i = 0; i < 3 / 2; i++) {
        for (int j = i; j < 3 - i - 1; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[3-j-1][i];
            matrix[3-j-1][i] = matrix[3-i-1][3-j-1];
            matrix[3-i-1][3-j-1] = matrix[j][3-i-1];
            matrix[j][3-i-1] = temp;
        }
    }
}

void printMatrix(int matrix[3][3]) {
    // Display the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    printf("Original Matrix:\n");
    printMatrix(matrix);
    
    rotateMatrix(matrix);  // Rotate the matrix by 90 degrees
    
    printf("\nRotated Matrix (90 degrees clockwise):\n");
    printMatrix(matrix);
    
    return 0;
}
