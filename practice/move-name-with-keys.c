#include<stdio.h>
#include<windows.h>

int main(int argc, char const *argv[])
{
    COORD c;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("Hello");
    return 0;
}
