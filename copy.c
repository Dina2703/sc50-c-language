#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


//copy version 1, it copies only the address of the first char, so when you change the value via one variable, second varibale value will get change as well.
// int main(void)
// {
//     string s = get_string("s: ");
//     string t = s;
//     t[0] = toupper(t[0]);
//     //how they both representing the same address, now these two variables poiting to the same address.
//     printf("s: %s\n", s);
//     printf("t: %s\n", t);
// }

//copy version 2, copy the value into a new place with malloc() function
int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1); // the +1 for \o which is the ending symbol for strings, strlen() returns string length (int). We have to pass malloc() a number of how many bites we needed.

    //if amlloc() for some reasons failed it returns NULL
    if( t == NULL)
    {
        return 1;
    }

    //strcpy() makes copy of a string, so usually it works with malloc() which gives us a chunk of memory and strcpy() filles it with a brand new copied string.
    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    return 0;
}