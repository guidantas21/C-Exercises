// Write a function that receives the values of X and A as a parameter, calculates and returns, 
// also in the parameter, the value of S given by:

// S = (1 / A) * (20 / X) + (2 / A - 1) * (19 / X²) + (3 / A - 2) * (18 / X³) + ... + (10 / A - 19) * (1 / X^20)

// Also write a function that outputs the string in the format shown above.

#include <stdio.h>

void calculateS(int X, int A, int *S) {
    for (int i = 0; i < 20; i++) {
        *S += ((1 + i) / A) * ((20 - i) / X);
        A--;
        X *= X;
    }
}

void printSequence(int X, int A) {
    for (int i = 0; i < 20; i++) {
        printf("(%d) / %d) * ((%d) / %d)", (1 + i), A, (20 - i), X);

        if (i < 19)
            printf(" + ");

        A--;
        X *= X;
    }
    printf("\n");
}

int main() {
    int X, A, S=0;

    scanf("%d %d", &X, &A);

    printf("test\n");

    calculateS(X, A, &S);



    return 0;
}