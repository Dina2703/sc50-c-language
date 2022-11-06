#include <stdio.h>
#include <cs50.h>


void draw(int n);
int main(void)
{
    int height = get_int("Height: ");
    //get a height of a pyramid and pass it to the custom func draw()
    draw(height);
}

//void because we don't a return value, only print out as side-effect.
void draw(int n)
{
    //we want to stop re-calling draw(),  when n is equal 1, otherwise its gonna loop forever
    if(n <= 0)
    {
        return;
    }

    draw(n - 1);
    //below code literally prints n hashes
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}