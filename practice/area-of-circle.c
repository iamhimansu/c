#include <stdio.h>

double areaOfCircle(int);

int main(int argc, char const *argv[])
{
    int r = 0;
    int *pr = NULL;

    pr = &r;

    printf("Enter radius to calculate area of Circle: ");
    scanf("%d", pr);

    printf("Area of circle with radius %d is: %.2f ", r, areaOfCircle(*pr));
    return 0;
}

double areaOfCircle(int radius){
    return (22/7)*(radius*radius);
}