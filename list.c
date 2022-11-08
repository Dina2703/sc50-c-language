#include <stdio.h>
#include <stdlib.h>


//old school version, for staticly allocating an array
// int main(void)
// {
    //below data will be put in stack of our memory, you can not add to that in code.
//     // int list[3];

//     // list[0] = 1;
//     // list[1] = 2;
//     // list[2] = 3;

//     int list[3] = {1, 2, 3};

//     for (int i = 0; i < 3; i++ )
//     {
//         printf("%i\n", list[i]);
//     }
// }

//Dynamic allocating an array

int main(void)
{
    //below memory get put on the heap(of the computery memory), that can be re-sized if you need more memory
    int *list = malloc(3 * sizeof(int));
    //the case if something went wrong, and computer out of memory.
    if(list == NULL)
    {
        return 1;
    }

    // assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //Time passes, and we need to add one more value into our array

    //allocate new array of size 4
    int *tmp = malloc(4 * sizeof(int));
    //case for any error
    if(tmp == NULL)
    {
        free(list);
        return 1;
    }

    //copy all values into a temperarly variable 'tmp' from 'list'
    for(int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    //add a new value into array
    tmp[3] = 4;

    //free the old 'list'
    free(list);

    //re-assign all items from tmp to list
    list = tmp;

    //now print them out
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    //free list again
    free(list);

    //signalize everything went well
    return 0;
}