#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, c = 65;

    printf("Enter number of rows for printing stars VERTICAL PYRAMID DOWN: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        c = 65;
        for (int j = 0; j < n * 2; j++)
        {
            if (j >= n - i && j <= n + i)
            {
                printf("%c", c);
                if (j < n)
                {

                    c++;
                }
                else
                {
                    c--;
                }
            }
            else
            {
                printf(" ");
            }
            if (c > 90)
            {
                c = 65;
            }
            if (c < 65)
            {
                c = 90;
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
