// Write a program that fills a vector with 15 integer values. Create a resultant vector that contains 
// all prime numbers from the entered vector. Write the resulting vector

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15
#define MAX 10

bool isPrime(int number) {
    if (number < 1)
        return false;
    
    for (int i = 2; i <= number; i++)
        if (number % 2 == 0)
            return false;

    return true;
    
}

void populateRandomArray(int array[]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)  {
        array[i] = (rand() % (MAX + 1));
    }
}

void populatePrimeNumbersArray(int array[], int primeNumbers[], int *length) {
    int pos = 0;

    for (int i = 0; i < SIZE; i++) {
        if (isPrime(array[i])) {
            primeNumbers[pos] = array[i];
            pos++;
        }
    }
    *length = pos;
}

void printArray(int array[], int lenght) {
    for (int i = 0; i < lenght; i++) {
        printf("%2d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[SIZE], primeNumbers[SIZE];
    int length;

    populateRandomArray(array);
    populatePrimeNumbersArray(array, primeNumbers, &length);

    printArray(array, SIZE);
    printArray(primeNumbers, length);

    return 0;
}