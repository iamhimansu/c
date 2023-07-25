#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

    long long int x;

    printf("Enter a number to check for odd/even: ");
    scanf("%lld", &x);
    printf("\n");

    // binary & bitwise operator
    

    if (x & 1)
    {
        printf("%lld is an odd number.", x);
    }
    else
    {
        printf("%lld is an even number.", x);
    }

    return 0;
}
