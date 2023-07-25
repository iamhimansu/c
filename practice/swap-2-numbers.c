#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(int argc, char const *argv[])
{

    int x = 0, y = 0;

    printf("Enter 2 numbers to SWAP: (x y)\n");

    scanf("%d %d", &x, &y);

    printf("Two numbers were: (x: %d), (y: %d)\n", x, y);
    printf("Performing Swapping\n");
    swap(&x, &y);
    printf("Two numbers after swapping are: (x: %d), (y: %d)", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}