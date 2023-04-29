// Write a function that determines whether a number is prime. A prime number is 
// greater than 1 and can olny be divided by 1 and itself (for example: 2, 3, 5, 7, 11, 13, 17, 19...).

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}


int main() {
    int a;

    scanf("%d", &a);
    printf("%d\n", isPrime(a));

    return 0;
}