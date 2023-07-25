#include <stdio.h>
#include <stdbool.h>

long long int getIntegerOnly(void);

int main(int argc, char const *argv[])
{
    printf("Enter integer only: ");

    long long int x = getIntegerOnly();

    printf("Integer part was %lld", x);
    getchar();
    return 0;
}

long long int getIntegerOnly(void)
{
    long long int x = 0;
    char ch;

    do
    {
        ch = getchar();

        if (ch >= 48 && ch <= 57)
        {
            printf("%d\n", ch);
            x = (x * 10) + (ch - 48);
        }
        else if (ch == '\n')
        {
            break;
        }

    } while (true);
    return x;
}