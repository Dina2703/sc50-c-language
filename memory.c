#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //right side of the code gives us a chunk of memory, it's the address of the first bite of that chunk , and we are assinging it into pointer x, using star(*)
    int *x = malloc(3 * sizeof(int));

    x[0] = 23;
    x[1] = 55;
    x[2] = 89;
    printf("%i\n", x[0]);
    free(x);
}

//run valgrind ./filename  to check for any errors