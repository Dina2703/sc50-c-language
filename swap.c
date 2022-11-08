#include <stdio.h>
#include <stdlib.h>


//don't forget to include the prototype of our custom func swap() at the top.
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // to pass addresses of the values
    printf("x is %i, y is %i\n", x, y);
}

//now we're passing address of a and b(which are x and y)
void swap(int *a, int *b)
{

//we wonna GO to that address and put what every at that address into temp var.
    int temp = *a;
    //we want to know put what every at b location into a, read from the right side, GO to address b and put whatever at this place into a.
    *a = *b;
    *b = temp;

}