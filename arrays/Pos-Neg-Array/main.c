// Make a program that fills a vector with eight integers, calculates and displays two resulting vectors. 
// The first resulting vector must contain the positive numbers and the second the negative numbers. 
// Each resulting array will have a maximum of eight positions, which may not be fully utilized.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 8
#define RANGE 10

void populateRandomArray(int array[]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        array[i] = (rand() % (2*RANGE + 1)) - RANGE;
    }
} 

void populatePositiveNegative(int array[], int positive[], int negative[]) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] > 0) {
            positive[i] = array[i];
        } else if (array[i] < 0) {
            negative[i] = array[i];
        }
    }
}

void printArray(int array[]) {
    for (int i = 0; i < SIZE; i++)
        printf("%d\t", array[i]);
    printf("\n");
}

int main() {
    int array[SIZE], positive[SIZE], negative[SIZE];

    populateRandomArray(array);
    populatePositiveNegative(array, positive, negative);

    printf("Array: ");
    printArray(array);

    printf("Postive: ");
    printArray(positive);

    printf("Negative: ");
    printArray(negative);

    return 0;
}