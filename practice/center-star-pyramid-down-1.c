#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n, k;

    printf("Enter number of rows for printing stars PYRAMID DOWN: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (j <= n - 1 + i && j >= n + 1 - i && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
