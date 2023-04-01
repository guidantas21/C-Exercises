/*
Write a function called getRectangleMeasurements that receives the parameters b and h
(the measurements in centimeters of the two sides of a rectangle) and returns, in
parameters, A and P respectively, the area (b*h) and the perimeter (2*(b+h )) of
this rectangle. Also, the function should return 1, if the rectangle is a square, and 0 if it's not. Show results in main() function
*/

#include <stdio.h>

int getRectangleMeasurements(float b, float h, float *A, float *P) {
    *A = b * h;
    *P = 2 * (b + h);

    return b == h ? 1 : 0;
}

void inputRectangleData(float *b, float *h) {
    printf("=== Rectangle Measurements ===\n");
    printf("Input <b> <h>: ");
    scanf("%f %f", b, h);
}

void printRectangleMeasurements(float A, float P, int isSquared) {
    printf("Area = %.2f\nPerimeter = %.2f\n", A, P);
    printf("It's ");
    printf(isSquared == 1 ? "" : "not");
    printf(" a square\n");
}

int main() {
    float b, h, A, P;
    int isSquared;

    inputRectangleData(&b, &h);
    isSquared = getRectangleMeasurements(b, h, &A, &P);
    printRectangleMeasurements(A, P, isSquared);

    return 0;
}