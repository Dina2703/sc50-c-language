#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user for x
    // int x = get_int("x: ");
    float x = get_float("x: ");

    //Prompt user for y
    // int y = get_int("y: ");
    float y = get_float("y: ");

    //Divide x by y
    float z = x / y;

    //Perform addition. .2 before f, for 2 decimal digits we want to get after decimal point.
    // printf("%i", x + y);
    printf("%.2f\n", z);
}