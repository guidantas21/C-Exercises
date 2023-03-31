/*
Write a function that takes a positive integer value N as a parameter and returns 
the value of S. 
S = 1 + 1/1! +1/2! +1/3! +1 /N!
*/

#include <stdio.h>

float calculateS(int n) {
    double s = 1;
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        s += 1.0 / factorial;
    }
    return s;
}

void inputN(int *n) {
    printf("N = ");
    scanf("%i", n);
}

void printResult(float result) {
    printf("S = %.2f\n", result);
}

int main() {
    int n;
    float s;

    inputN(&n);

    s = calculateS(n);

    printResult(s);
    
    return 0;
}