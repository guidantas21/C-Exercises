// Write a program that fills a 10x10 matrix with integer numbers, performs the swaps specified below 
// and displays the resulting matrix: 
// a) Row 2 with row 8; 
// b) column 4 with column 10; 
// c) The main diagonal with the secondary diagonal; 
// d) Row 5 with column 10;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MAX 10
#define MIN -10

int getRandomNumber(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

void fillMatrixRandomly(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = getRandomNumber(MIN, MAX);
        }
    }
}

void swapColumns(int matrix[ROWS][COLS], int col1, int col2, int newMatrix[ROWS][COLS]) {
    col1--;
    col2--;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (j == col1) {
                newMatrix[i][j] = matrix[i][col2];
            } else if (j == col2) {
                newMatrix[i][j] = matrix[i][col1];
            } else {
                newMatrix[i][j] = matrix[i][j];
            }
        }
    }
}

void swapRows(int matrix[ROWS][COLS], int row1, int row2, int newMatrix[ROWS][COLS]) {
    row1--;
    row2--;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == row1) {
                newMatrix[i][j] = matrix[row2][j];
            } else if (i == row2) {
                newMatrix[i][j] = matrix[row1][j];
            } else {
                newMatrix[i][j] = matrix[i][j];
            }
        }
    }
}

void swapRowsColumns(int matrix[ROWS][COLS], int row, int col, int newMatrix[ROWS][COLS]) {
    row--;
    col--;

    int tempRow[ROWS];
    int tempCol[COLS];

    for (int i = 0; i < ROWS; i++) {
        tempCol[i] = matrix[i][col];

        for (int j = 0; j < COLS; j++) {
            tempRow[j] = matrix[row][j];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == row) {
                newMatrix[i][j] = tempCol[j];
            } else if (j == col) {
                newMatrix[i][j] = tempRow[i];
            } else {
                newMatrix[i][j] = matrix[i][j];
            }
        }
    }
}

void swapDiagonals(int matrix[ROWS][COLS], int newMatrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == j) {
                newMatrix[i][j] = matrix[i][COLS - 1 - j];
            } else if (j == COLS - 1 - i) {
                newMatrix[i][j] = matrix[i][i];
            } else {
                newMatrix[i][j] = matrix[i][j];
            }
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[ROWS][COLS], b[ROWS][COLS];

    srand(time(NULL));

    fillMatrixRandomly(a);
    swapRows(a, 2, 8, b);
    swapColumns(a, 4, 10, b);
    swapRowsColumns(a, 5, 10, b);
    swapDiagonals(a, b);

    printf("Matrix:\n");
    printMatrix(a);
    printf("\nResulting Matrix:\n");
    printMatrix(b);

    return 0;
}