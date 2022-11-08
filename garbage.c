#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int scores[3];
    //if you don't initialize scores, it's gonna print out any information, or garbage from the memory.
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}

