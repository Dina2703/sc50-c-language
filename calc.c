#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user for x
    // int x = get_int("x: ");
    long x = get_long("x: ");

    //Prompt user for y
    // int y = get_int("y: ");
    long y = get_long("y: ");

    //Perform addition
    // printf("%i", x + y);
    printf("%li", x + y);
}