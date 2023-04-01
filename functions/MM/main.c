/*
Write a function called MM that takes two parameters, A and B, and returns the 
smaller of the two in A and the larger of the two in B. If equal values ​​are 
passed, the order of the answer between them doesn't matter.
*/

#include <stdio.h>

void MM(int *A, int *B) {
    int temp;

    if (*A < *B) {
        temp = *A;
        *A = *B;
        *B = temp;
    }
}

void testCase(int A, int B, int desiredA, int desiredB) {
    MM(&A, &B);

    if (A == desiredA && B == desiredB)
        printf("[CORRECT] ");
    else
        printf("[WRONG] ");
    
    printf("Input: A = %i, B = %i\tOutput: A = %i, B = %i\n", A, B, desiredA, desiredB);
}

int main() {
    testCase(2, 1, 2, 1);
    testCase(0, 0, 0, 0);
    testCase(1, 7, 7, 1);
    testCase(9373, 56474, 56474, 9373);

    return 0;
}