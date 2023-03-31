/*
Make a function that takes a person's height and gender as a parameter 
and returns their ideal weight. Calculate ideal weight using the formula 
weight = 72.7 * height - 58 (for men) 
weight = 62.1 * height - 44.7 (for women).
*/

#include <stdio.h>

float calculateIdealWeightKg(char gender, float heightM) {
    int idealWeightKg;

    switch (gender) {
    case 'm':
    case 'M':
        idealWeightKg = (72.7 * heightM) - 58.0;
        break;
    case 'f':
    case 'F':
        idealWeightKg = (62.1 * heightM) - 44.7;
        break;
    }

    return idealWeightKg;
}

void getUserData(char *gender, float *heightM) {
    printf("Input gender and height (m/f h): ");
    scanf("%c %f", gender, heightM);
}   

void printIdealWeight(float idealWeightKg) {
    printf("Ideal weight: %.2fkg\n", idealWeightKg);
}

int main() {
    char gender;
    float idealWeightKg, heightM;

    getUserData(&gender, &heightM);

    idealWeightKg = calculateIdealWeightKg(gender, heightM);

    printIdealWeight(idealWeightKg);

    return 0;
}

