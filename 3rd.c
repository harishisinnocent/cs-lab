#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to print matrix
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two sparse matrices
void addSparseMatrices(int m1[ROWS][COLS], int m2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = m1[i][j] + m2[i][j];  // Adding corresponding elements
        }
    }
}

int main() {
    // Define two sparse matrices
    int m1[ROWS][COLS] = {
        {0, 0, 5},
        {0, 0, 0},
        {4, 0, 0}
    };
    
    int m2[ROWS][COLS] = {
        {1, 0, 0},
        {0, 0, 3},
        {0, 6, 0}
    };

    int result[ROWS][COLS] = {0};  // Initialize result matrix to zero

    printf("Matrix 1:\n");
    printMatrix(m1);
    
    printf("\nMatrix 2:\n");
    printMatrix(m2);
    
    // Add sparse matrices
    addSparseMatrices(m1, m2, result);
    
    printf("\nResultant Matrix (After Addition):\n");
    printMatrix(result);
    
    return 0;
}
