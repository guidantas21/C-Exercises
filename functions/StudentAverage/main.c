/*
Make a function that receives the three grades of a student as parameters and a letter.
If the letter is A, the function should calculate the arithmetic average of the student's
grades; if it is P, it must calculate the weighted average, with weights 5, 3 and 2. 
The calculated average must be returned to the main() function. 
Prototype: float calculateStudentAverage(float grade1, float grade2, float grade3, char averageType);
*/

#include <stdio.h>

float inputGrade();

char inputAverageType();

float calculateStudentAverage(float grade1, float grade2, float grade3, char averageType);

int main() {
    float grade1 = inputGrade();
    float grade2 = inputGrade();
    float grade3 = inputGrade();

    char averageType = inputAverageType();

    float average = calculateStudentAverage(grade1, grade2, grade3, averageType);

    printf("Average: %.2f\n", average);

    return 0;
}

float inputGrade() {
    float grade;

    while (1) {
        printf("Input grade: ");
        scanf("%f", &grade);

        if (grade >= 0)
            return grade;
        
        printf("[INVALID INPUT] a grade cannot be negative, try again!\n");
    }
}

char inputAverageType() {
    char averageType;
    while (1) {
        printf(
            "\nTypes of grade average\n"
            "[A] Arithmetic\n"
            "[W] Weighted\n"
        );

        printf("Select the type of grade average: ");
        scanf(" %c", &averageType);

        if (averageType == 'A' || averageType == 'a' || averageType == 'W' || averageType == 'w')
            return averageType;
        
        printf("[INVALID INPUT] %c is not a valid option, try again!\n", averageType);
    }
}

float calculateStudentAverage(float grade1, float grade2, float grade3, char averageType) {
    if (averageType == 'A' || averageType == 'a')
        return (float) (grade1 + grade2 + grade3) / 3.0;

    else if (averageType == 'W' || averageType == 'w')
        return (float) (5*grade1 + 3*grade2 + 2*grade1) / 3.0;
}