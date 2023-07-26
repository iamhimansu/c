#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter number of rows for printing stars: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    getchar();
    return 0;
}
