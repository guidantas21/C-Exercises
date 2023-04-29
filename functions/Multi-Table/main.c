// Make a function that receives an integer in the range from 1 to 9 as a 
// parameter and shows the following multiplication table (in the example, n=9)

/*
1 
2   4 
3   6    9 
4   8    12   16 
5   10   15   20   25 
6   12   18   24   30   36 
7   14   21   28   35   42   49 
8   16   24   32   40   48   56   64 
9   18   27   36   45   54   63   72   81 
*/

#include <stdio.h>

void printMultiplicationTable(int number) {
    int n;

    for (int i = 1; i <= number; i++)  {
        for (int j = 1; j <= i; j++ ) {
            n = i * j;
            printf("%2d  ", n);
        }
        printf("\n");
    }
}

int main() {
    int number;

    scanf("%d", &number);

    printMultiplicationTable(number);

    return 0;
}