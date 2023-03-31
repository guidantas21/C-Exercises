/*
Write a function that takes a single value representing seconds. This function 
should convert it to hours, minutes and seconds. Show the conversion result.
*/

#include <stdio.h>

void convertSeconds(int totalSeconds, int *hours, int *minutes, int *seconds) {
    int remainingSeconds;

    *hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;
    *minutes = remainingSeconds / 60;
    remainingSeconds = remainingSeconds % 60;
    *seconds = remainingSeconds;
}

void getTimeInSeconds(int *totalSeconds) {
    printf("Input time in seconds: ");
    scanf("%i", totalSeconds);
}

void printTime(int hours, int minutes, int seconds) {
    printf("%i hours, %i minutes and %i seconds\n", hours, minutes, seconds);
}

int main() {
    int totalSeconds, hours, minutes, seconds;

    getTimeInSeconds(&totalSeconds);

    convertSeconds(totalSeconds, &hours, &minutes, &seconds);

    printTime(hours, minutes, seconds);

    return 0;
}