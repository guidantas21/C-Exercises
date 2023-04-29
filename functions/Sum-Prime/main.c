/*
Write a program that reads an undetermined number of pairs of x,y values (x must be less than y), 
all integers and positive, one pair at a time. For each pair, call the function that determines 
the sum of prime numbers between x and y (inclusive). The program should display the x and y 
values, followed by the calculated sum. Reading the pairs will end when the entered values for 
x and y are equal.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int sumPrimes(int x, int y) {
    int sum = 0;

    for (int i = x; i <= y; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int x, y, sum;

    while (true) {
        scanf("%d %d", &x, &y);

        if (x == y)
            break;
        
        sum = sumPrimes(x, y);

        printf("Sum: %d\n", sum);
    }

    return 0;
}