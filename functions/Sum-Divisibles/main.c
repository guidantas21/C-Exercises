/*
Make a program containing a function that receives 3 integers a, b, c, 
being a greater than 1. The function must add all the integers between 
b and c that are divisible by a (including b and c) and return the 
result to be displayed
*/

#include <stdio.h>

int sumDivisibles(int a, int b, int c) {
    int sum = 0, start, end;

    if (b <= c) {
        start = b;
        end = c;
    } else {
        start = c;
        end = b;
    }

    for (int i = start; i <= end; i++)
        if (i % a == 0)
            sum += i;
    return sum;
}

void testCase(int a, int b, int c, int desiredOutput) {
    int output = sumDivisibles(a, b, c);

    if (output == desiredOutput)
        printf("[CORRECT] ");
    else
        printf("[INCORRECT] ");

    printf("Input: %i, %i, %i\tOutput: %i\n", a, b, c, output);
}

int main() {
    testCase(1, 2, 3, 5);
    testCase(2, 4, 8, 18);
    testCase(1, 3, 2, 5);
    testCase(2, 8, 4, 18);

    return 0;
}