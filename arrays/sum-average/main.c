// Calculate the sum of elements of a 10-position array

#include <stdio.h>

#define SIZE 10

int sumArray(int *array, size_t size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += array[i];

    return sum;
}

void inputArray(int *array, size_t size) {
    for (int i = 0; i < size; i++) {
        printf("Index %d: ", i);
        scanf(" %d", &array[i]);
    }
}

float getAverage(int sum, size_t size) {
    return (float) sum / size;
}

int countAboveAverage(int *array, size_t size, int average) {
    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] > average) {
            counter++;
        }
    }

    return counter;
}

int main() {
    int array[SIZE];

    inputArray(array, SIZE);

    int sum = sumArray(array, SIZE);
    float average = getAverage(sum, SIZE);
    int aboveAverage = countAboveAverage(array, SIZE, average);

    printf("Sum = %d\nAverage = %.2f\nAboveAverage = %d\n", sum, average, aboveAverage);

    return 0;
}