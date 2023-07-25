#include <stdio.h>

int add(int, int);

int main(int argc, char const *argv[])
{

    int x = 0,y = 0;

    printf("Enter Two numbers to add: ");
    scanf("%d %d", &x, &y);
    printf("Sum of %d and %d is %d", x, y, add(x, y));
    return 0;
}

int add(int a,int b){
    return a+b;
}
