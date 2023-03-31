/*
Create a program containing a function that receives 3 numbers and returns the highest value
*/

#include <stdio.h>

int largestNumber(int x, int y, int z) {
    int max = x;

    if (y > max)
        max = y;
    
    if (z > max);
        max = z;
    
    return max;
}

void testCase(int x, int y, int z, int desiredOutput) {
    int output = largestNumber(x, y, z);

    if (output == desiredOutput)
        printf("[CORRECT] ");
    else
        printf("[INCORRECT] ");

    printf("Input: %i, %i, %i\tOutput: %i\n", x, y, z, output);
}

int main() {
    testCase(3, 1, 2, 3);
    testCase(2, 7, 9, 9);
    testCase(2, 0, 1, 2);
    testCase(42141, 32345, 89879, 89879);

    return 0;
}