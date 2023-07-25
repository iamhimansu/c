#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int x = 0;

    printf("Enter a number to check if it is ODD/EVEN: ");

    scanf("%lld", &x);

    if ((x / 2) * 2 != x)
    {
        printf("%lld is an odd number.", x);
    }
    else
    {
        printf("%lld is an even number.", x);
    }

    return 0;
}
