#include <stdio.h>

int main()
{
    float a1, a2, a3; // declaring angles variables as float type

    printf("Type the first angle: ");
    scanf("%f", &a1);
    printf("Type the second angle: ");
    scanf("%f", &a2);
    printf("Type the third angle: ");
    scanf("%f", &a3);

    // using conditionals to filter possibilities and respond the result
    if((a1 + a2 + a3) != 180)
    {
        printf("It's not a triangle!");
    }

    else
    {
        if((a1 > 90) | (a2 > 90) | (a3 > 90))
        {
            printf("You have an obtuse triangle!");
        }
        else if ((a1 == 90) | (a2 == 90) | (a3 == 90))
        {
            printf("You have a right triangle.");
        }
        else
        {
            printf("You have an acute triangle.");
        }
    }

    return 0;
}