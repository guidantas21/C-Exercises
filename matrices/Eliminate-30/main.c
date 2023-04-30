// Write a program that fills a 6x4 matrix with integer numbers, calculates and displays how many 
// elements of this matrix are greater than 30, and then assembles a second matrix with elements 
// different from 30. In place of the number 30, in the second matrix, put the number zero.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLS 4
#define MIN 25
#define MAX 35

void fillMatrixRandomly(int matrix[ROWS][COLS]) {
    srand(time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = (rand() % (MAX - MIN + 1)) + MIN;
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int count30(int matrix[ROWS][COLS]) {
    int c = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > 30) {
                c++;
            }
        }
    }
    return c;
}

void fillMatrixWithout30(int matrix[ROWS][COLS], int newMatrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 30) {
                newMatrix[i][j] = 0;
            } else {
                newMatrix[i][j] = matrix[i][j];
            }
        }
    }
}

int main() {
    int A[ROWS][COLS], B[ROWS][COLS], counter;

    fillMatrixRandomly(A);

    counter = count30(A);

    fillMatrixWithout30(A, B);

    printf("Matrix:\n");
    printMatrix(A);

    printf("\n%d numbers are greater than 30 in the matrix\n\n", counter);

    printf("Resultant Matrix (replace 30 with 0):\n");
    printMatrix(B);

    return 0;
}