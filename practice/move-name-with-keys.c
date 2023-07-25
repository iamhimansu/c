#include<stdio.h>
#include<windows.h>
#include <stdbool.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main(int argc, char const *argv[])
{
    int x = 0, y = 0;
    while (true)
    {

        char k = getchar();

        switch (k)
        {
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;

        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 27:
            exit(0);
            break;
        }

        system("cls");
        gotoxy(x, y);
        printf("Hello");
    }

    getchar();
    return 0;
}
