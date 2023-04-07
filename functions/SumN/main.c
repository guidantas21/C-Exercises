/*
Write a function that takes a positive integer n as a parameter and 
returns the sum of the first n integers. For example, if the function 
receives n=5, it must return 15, because 15 = 1 + 2 + 3 + 4 + 5. 
Prototype: int sumN(int n)
*/

#include <stdio.h>

int sumN(int n);

void inputN(int *n);

int main() {
    int n, sum;

    inputN(&n);

    sum = sumN(n);

    printf("%i\n", sum);

    return 0;
}

void inputN(int *n) {
    while (1) {
        printf("Input a positive integer: ");
        scanf("%i", n);

        if (*n > 0)
            break;
        
        printf("[INVALID INPUT] %i is not a positive integer\n", *n);
    }
    
} 

int sumN(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++)
        sum += i;
        
    return sum;
}