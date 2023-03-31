/*
Write a function that takes the values ​​of the sides of a triangle as an argument. 
The function should return 0 if the triangle is equilateral (3 equal sides), 1 
if it is isosceles (2 equal sides) or 2 if it is scalene (3 different sides)
*/

#include <stdio.h>

int classifyTriangle(float a, float b, float c) {
    if (a == b && a == c) 
        return 0;
    else if (a == b || a == c || c == b) 
        return 1;
    else 
        return 2;
}

void getTriangleSides(float *a, float *b, float *c) {
    printf("Input triangle sides (a b c): ");
    scanf("%f %f %f", a, b, c);
}

void printTriangleType(int triangleType) {
    switch (triangleType) {
        case 0:
            printf("Equilateral\n");
            break;
        case 1:
            printf("Isosceles\n");
            break;
        case 2:
            printf("Scalene\n");
            break;
        default:
            printf("Invalid type of triangle\n");
            break;
    }
}

int main() {
    float a, b, c;
    int triangleType;

    getTriangleSides(&a, &b, &c);

    triangleType = classifyTriangle(a, b, c);

    printTriangleType(triangleType);

    return 0;
}