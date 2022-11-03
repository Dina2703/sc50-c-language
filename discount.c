#include <stdio.h>
#include <cs50.h>

float discount(float regularPrice, int percent_off);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}


//function that takes an argument and retuns a value

float discount(float regularPrice,int percent_off)
{
    //since here only one line of code we can return it without storing an a variable
    //if we don't return the value back, the main scope can't access the sale price(which comes from discount() to main())
    return regularPrice * (100 - percent_off) / 100;

}

//so input |___algorithm___| output schema, inputs(arguments) are -> regular, percent_off, the algorithm is 'discount()', the output is stored in 'sale' variable.