
//all libraries keep at the top
#include <stdio.h>
#include <cs50.h>

//keep declaration at the top
int get_negative_number(void);

int main(void)
{
    int i = get_negative_number();
    printf("%i\n", i);
}

//declare the get_negative_number function

int get_negative_number(void)
{
    //initialize n variable
    int n;
    do
    {
        n = get_int("Negative number: ");
        //debagging by printing out the value of 'n'
        printf("n is %i\n", n);
    }
    while(n > 0);
    return n;
}