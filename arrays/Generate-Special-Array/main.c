// Write a program that stores 10 integer values in vector A and creates vector B of the same type, 
// observing the formation rules: if the index value of B is even, the element value will be the 
// element of A multiplied by 5; if the index is odd, the element is the element of A plus 5. 
// Show the contents of the two vectors.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define RANGE 10

bool isEven(int number) {
    return number % 2 == 0 ? true : false;
}

void populateArrayRandomly(int array[]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        array[i] = (rand() % (2*RANGE) + 1) - RANGE;
    }
}

void populateSpecialArray(int A[], int B[]) {
    for (int i = 0; i < SIZE; i++) {
        if (isEven(i))
            B[i] = A[i] * 5;
        else
            B[i] = A[i] + 5;
    }
}

void printArray(int array[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main() {
    int A[SIZE], B[SIZE];

    populateArrayRandomly(A);
    
    populateSpecialArray(A, B);

    printf("A: ");
    printArray(A);

    printf("B: ");
    printArray(B);

    return 0;
}