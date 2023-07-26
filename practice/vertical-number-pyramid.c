#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, k = 0;

    printf("Enter number of rows for printing stars VERTICAL PYRAMID DOWN: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        k = 1;
        for (int j = 0; j < n * 2; j++)
        {
            if (j >= n - i && j <= n + i)
            {
                printf("%d", k);
                if (j < n)
                {

                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
