#include <stdio.h>
void swapWithoutThirdVar(int *, int *);

int main(int argc, char const *argv[])
{
    int x = 0, y = 0;

    printf("Enter 2 numbers to SWAP: (x y)\n");

    scanf("%d %d", &x, &y);

    printf("Two numbers were: (x: %d), (y: %d)\n", x, y);
    printf("Performing Swapping\n");
    swapWithoutThirdVar(&x, &y);
    printf("Two numbers after swapping are: (x: %d), (y: %d)", x, y);

    return 0;
}

void swapWithoutThirdVar(int *a, int *b)
{
    // a = 10, b = 20
    // a = 20, b = 10;
    //  a = 30 -> (a+b) -> (10+20) = 30
    //  b = 10 -> (a-b) -> (30-20) = 10
    //  a = 20 -> (a-b) -> (30-10) = 20
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    // one liner *a = *a + *b - (*b = *a);
}