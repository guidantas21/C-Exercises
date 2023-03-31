/*
Using functions, write a program that calculates the roots of a quadratic equation
*/

#include <stdio.h>
#include <math.h>

float calculateDelta(float a, float b, float c) {
    return (b*b) - (4 * a * c);
}

void calculateQuadraticRoots(float delta, float a, float b, float c, float *root1, float *root2) {
    if (delta > 0) {
        *root1 = (float) (-b + sqrt(delta)) / (2*a);
        *root2 = (float) (-b - sqrt(delta)) / (2*a);
    } else if (delta == 0) {
        *root1 = *root2 = (float) (-b) / (2 * a); 
    } else {
        *root1 = *root2 = NAN;
    }
}

void printQuadraticRoots(float root1, float root2) {
    if (isnan(root1) || isnan(root2)) {
        printf("The equation has no real roots.\n");
    } else if (root1 == root2) {
        printf("The equation has one real root: %f\n", root1);  
    } else {
        printf("The equation has two real roots: %.2f and %.2f\n", root1, root2);
    }
}

void getCoefficients(float *a, float *b, float *c) {
    printf("Input coefficients <a> <b> <c>: ");
    scanf("%f %f %f", a, b, c);
}

int main() {
    float a, b, c;
    float delta, root1, root2;

    getCoefficients(&a, &b, &c);

    delta = calculateDelta(a, b, c);

    calculateQuadraticRoots(delta, a, b, c, &root1, &root2);

    printQuadraticRoots(root1, root2);

    return 0;
}