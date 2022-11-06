#include <stdio.h>
#include <cs50.h>


void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    //custome func draw()
    draw(height);

}

//func draw() doesn't return any value, just needs to print something just called side-effect.

void draw(int n)
{
    //how many rows I want
    for(int i = 0; i < n; i++)
    {
        //how many bricks in a row I want
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

//task to print out pyramide below, using the number given by a user.
//#
//##
//###
//####
//#####
//######
