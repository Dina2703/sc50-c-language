#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //declare an array and initialize it values.
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++ )
    {
        //if at the numbers[i] {value  of index i} is 0, print 'found' and return 0, it's for everything went well, no error occured.
        if(numbers[i] == 0)
        {
            printf("Found \n");
            return 0;
        }
    }
    printf("Not Found\n");
    //return 1 for not successful result
    return 1;
}