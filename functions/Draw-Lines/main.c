/*
Make a function that draws lines of characters on the screen. The function will 
receive as arguments the type of character and the number of lines to be drawn
*/

#include <stdio.h>

void drawLines(char character, int length, int numberOfLines) {
    for (int i = 0; i < numberOfLines; i++) {
        for (int j = 0; j < length; j++)
            printf("%c", character);
        printf("\n");
    }
}

void inputLineData(char *character, int *length, int *numberOfLines) {
    printf("== Line Parameters ==\n");
    printf("Character: ");
    scanf("%c", character);
    printf("Length: ");
    scanf("%i", length);
    printf("Number of lines: ");
    scanf("%i", numberOfLines);
}

int main() {
    char character;
    int length, numberOfLines;

    inputLineData(&character, &length, &numberOfLines);

    drawLines(character, length, numberOfLines);

    return 0;
}