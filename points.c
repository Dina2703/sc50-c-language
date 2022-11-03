#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int MYPOINTS = 2;
    //Prompt user for x
    int points = get_int("How many points did you lose? ");

    if(points < MYPOINTS)
    {
        printf("You lost fewer points that me.\n");
    }
    else if (points > MYPOINTS)
    {
        printf("You lost more points that me. I lost %i\n", MYPOINTS);
    }
    else
    {
        printf("You lost the same points that me.\n");
    }

}