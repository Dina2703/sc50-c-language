#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n;
    //ask question until you get a positive clear number (grater than 0)
    do
    {
        n = get_int("Size: ");
    }
    while(n < 1);

    //if the number is positive integer, go execute the code below
    //For each row
    for(int i = 0; i < n; i++)
    {
        //For each column
        for(int j = 0; j < n; j++)
        {
            //Print a brick
            printf("#");
        }
        //Move to the next row
        printf("\n");
    }
}