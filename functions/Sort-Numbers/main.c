// Write a program containing a function that takes three integers and returns them sorted. 
// The main() function should show the values.

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
// 1 2 3

// 2 1 3
// 1 2 3

// 2 3 1
// 1 3 2

// 3 2 1
// 1 2 3

void sort3Numbers(int *a, int *b, int *c) {
    if (*b < *a && *b < *c)
        swap(a, b);

    else if (*c < *a && *c < *b)
        swap(a,c);
    
    if (*c < *b)
        swap(b, c);
}

int main() {
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    
    sort3Numbers(&a, &b, &c);

    printf("%d %d %d\n", a, b, c);

    return 0;
}