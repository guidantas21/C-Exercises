/*
Make a program that reads a date (day, month and year), passes it as a parameter
to a function that will readjust this date in five days
*/

#include <stdio.h>

void readjustYearMonthDay(int readjustDays, int *year, int *month, int *day) {
    *day += readjustDays;

    if (*day > 30) {
        *day -= 30;
        *month += 1;

        if (*month > 12) {
            *month -= 12;
            *year += 1;
        }

    } else if (*day <= 0) {
        *day += 30;
        *month -= 1;

        if (*month <= 0) {
            *month += 12;
            *year -= 1;
        }
    }
}

void getDate(int *readjustDays, int *year, int *month, int *day) {
    printf("Input current date (day month year): ");
    scanf("%i %i %i", day, month, year);
    printf("Input readjustment days: ");
    scanf("%i", readjustDays);
}

void printDate(int year, int month, int day) {
    printf("day: %i / month: %i / year: %i\n", day, month, year);
}

int main() {
    int readjustDays, year, month, day;

    getDate(&readjustDays, &year, &month, &day);

    readjustYearMonthDay(readjustDays, &year, &month, &day);

    printDate(year, month, day);

    return 0;
}