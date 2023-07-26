#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter number of rows for printing stars CENTER PYRAMID DOWN: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (j < n  - i || j >= n  + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
