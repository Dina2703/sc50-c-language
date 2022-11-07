#include <stdio.h>
#include <cs50.h>
#include <string.h>

//COMPARE NUMBERS
// int main(void)
// {
//     int i = get_int("i: ");
//     int j = get_int("j: ");

//     if(i == j)
//     {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
// }

//COMPARE STRINGS
// int main(void)
// {
//     string s = get_string("s: ");
//     string t = get_string("t: ");

//     if(strcmp(s, t) == 0)
//    {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
// }

//DONT COMPARE, JUST PRINT THE ADDRESSES
int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);
}