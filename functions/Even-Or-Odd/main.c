/*
Write a program that shows whether a number is even or odd using 
a function that returns 0 if the number is even or 1 if the number is odd
*/

#include <stdio.h>

int evenOrOdd(int number) {
    return number % 2 == 0 ? 0 : 1;
}

void testCase(int input, int desiredOutput) {
    int output = evenOrOdd(input);

    if (output == desiredOutput)
        printf("[CORRECT] ");
    else
        printf("[INCORRECT] ");

    printf("Input: %i\tOutput: %i\n", input, output);
}

int main() {
    testCase(2, 0);
    testCase(3, 1);
    testCase(7, 1);
    testCase(8447, 1);
    testCase(10302, 0);

    return 0;
}