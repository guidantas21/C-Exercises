// Create a program that fills and displays a 10 x 20 matrix with integers. Add each of the lines, 
// storing the result of the sums in a vector (show the vector). Next, the program should multiply 
// each element of the matrix by the sum of the corresponding row and display the resulting matrix.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 20
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

void fillRowSumArray(int matrix[ROWS][COLS], int rowsSum[ROWS]) {
    int sum;
    for (int i = 0; i < ROWS; i++) {
        sum = 0;
        for (int j = 0; j < COLS; j++)
            sum += matrix[i][j];
        rowsSum[i] = sum;
    }
}

void fillResultingMatrix(int matrix[ROWS][COLS], int newMatrix[ROWS][COLS], int rowsSum[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            newMatrix[i][j] = matrix[i][j] * rowsSum[i];
        }
    }
}

void printArray(int array[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], rowsSum[ROWS];

    srand(time(NULL));

    fillMatrixRandomly(a);
    fillRowSumArray(a, rowsSum);
    fillResultingMatrix(a, b, rowsSum);
    
    printf("Matrix:\n");
    printMatrix(a);
    printf("\nRows Sum: \n");
    printArray(rowsSum);
    printf("\nResulting Matrix:\n");
    printMatrix(b);

    return 0;
}