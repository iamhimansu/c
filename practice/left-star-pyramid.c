#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter number of rows for printing stars: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j < i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getchar();
    return 0;
}
