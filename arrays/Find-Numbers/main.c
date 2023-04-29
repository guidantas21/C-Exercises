// Write a program that reads 30 integers and stores them in an array. After that, the program must allow 
// the reading of any number and: 
// a) Write the message FOUND, if the number is in the vector or NOT FOUND, otherwise; 
// b) Calculate and write how many times this number appears in the vector.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30
#define RANGE 10

void populateRandomArray(int array[]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
        array[i] = (rand() % (2*RANGE + 1)) - RANGE;
}

void findNumber(int array[], int number) {
    int c = 0;

    for (int i = 0; i < SIZE; i++)
        if (array[i] == number)
            c++;

    if (c > 0)
        printf("FOUND (appears %d times)\n", c);
    else 
        printf("NOT FOUND\n");
}

void printArray(int array[]) {
    for (int i = 0; i < SIZE; i++)
        printf("%2d  ", array[i]);
    printf("\n");
}

int main() {
    int array[SIZE], number;

    populateRandomArray(array);
    printArray(array);

    printf("Input number: ");
    scanf("%d", &number);

    findNumber(array, number);

    return 0;
}