/*
Write a function that takes a positive integer value N as a parameter and returns 
the value of S. Also write a function to display the sequence in the format shown 
below. 
S = 2/4 +5/5 +10/6 +17/7 +26/8+... +(N^2 +1)/(N+3)
*/

#include <stdio.h>

float calculateS(int N) {
    float S = 0, x;

    printf("S = ");

    for (int i = 1; i <= N; i++) {
        x = (float) ((i*i) + 1) / (i + 3);
        S += x;

        if (N > 1) {
            printf(i > 1 ? " + " : "");
            printf("%.1f", x);
        }
    }
    
    printf(N > 1 ? " = " : "");
    printf("%.1f\n", S);

    return S;
}

void inputN(int *N) {
    printf("Input N: ");
    scanf("%i", N);
}

int main() {
    int N;
    float S;

    inputN(&N);
    S = calculateS(N);

    return 0;
}