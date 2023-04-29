// Write a function that takes a vector X of 20 elements as a parameter and returns 
// the number of positive numbers, the number of negative numbers and the sum of the 
// numbers in vector X

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 20
#define RANGE 10

void fillArrayRandomly(int array[]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        array[i] = (rand() % (2*RANGE) + 1) - RANGE;
    }
}

void printArray(int array[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void getArrayInfo(int array[], int *numPositives, int *numNegatives, int *sumNumbers) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] > 0)
            (*numPositives)++;
        else if (array[i] < 0)
            (*numNegatives)++;
    
        (*sumNumbers) += array[i];
    }
}

void printArrayInfo(int numPositives, int numNegatives, int sumNumbers) {
    printf("Positives: %d\n", numPositives);
    printf("Negatives: %d\n", numNegatives);
    printf("Sum: %d\n", sumNumbers);
}

int main() {
    int x[SIZE];
    int numPositives = 0;
    int numNegatives = 0;
    int sumNumbers = 0;

    fillArrayRandomly(x);

    printArray(x);

    getArrayInfo(x, &numPositives, &numNegatives, &sumNumbers);

    printArrayInfo(numPositives, numNegatives, sumNumbers);

    return 0;
}