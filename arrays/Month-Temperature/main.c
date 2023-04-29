// Make a program that receives the average temperature of each month of the year and stores them in a vector. 
// The program should calculate and display the highest and lowest temperatures of the year, along with the month 
// in which they occurred (the month should be shown in full: 0=January; 1=February; ...).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 12
#define MAX 40
#define MIN -10

void populateRandomArray(int array[]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        array[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void printArray(int array[]) {
    for (int i = 0; i < SIZE; i++)
        printf("%d\t", array[i]);
    printf("\n");
}

int getMaxTemperature(int monthTemperatures[]) {
    int maxTemperature = monthTemperatures[0];
    int hotMonthIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (monthTemperatures[i] > maxTemperature) {
            maxTemperature = monthTemperatures[i];
            hotMonthIndex = i;
        }
    }
    return hotMonthIndex;
}

int getMinTemperature(int monthTemperatures[]) {
    int minTemperature = monthTemperatures[0];
    int coldMonthIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (monthTemperatures[i] < minTemperature) {
            minTemperature = monthTemperatures[i];
            coldMonthIndex = i;
        }
    }
    return coldMonthIndex;
}

char *getMonthByIndex(int monthIndex) {
    switch(monthIndex) {
        case 0: return "January";
        case 1: return "February";
        case 2: return "March";
        case 3: return "April";
        case 4: return "May";
        case 5: return "June";
        case 6: return "July";
        case 7: return "August";
        case 8: return "September";
        case 9: return "October";
        case 10: return "November";
        case 11: return "December";
        default: return "";
    }
}

void printTemperatureInfo(int hotMonthIndex, int maxTemperature, int coldMonthIndex, int minTemperature) {
    printf("Hottest month (%s): %d degrees\n", getMonthByIndex(hotMonthIndex), maxTemperature);
    printf("Coldest month (%s): %d degrees\n", getMonthByIndex(coldMonthIndex), minTemperature);
}

int main() {
    int monthTemperatures[SIZE];

    populateRandomArray(monthTemperatures);

    printArray(monthTemperatures);

    int hotMonthIndex = getMaxTemperature(monthTemperatures);
    int maxTemperature = monthTemperatures[hotMonthIndex];

    int coldMonthIndex = getMinTemperature(monthTemperatures);
    int minTemperature = monthTemperatures[coldMonthIndex];

    printTemperatureInfo(hotMonthIndex, maxTemperature, coldMonthIndex, minTemperature);

    return 0;
}