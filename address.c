#include <stdio.h>
// #include <cs50.h>


// int main(void)
// {
//     int n = 50;
//     int *p = &n;
//     //to print out pointer value use %p instead of %i for integer.
//     printf("%p\n", p);

//     //or we can do just
//     // printf("%p\n", &n);
//     //other usage for *, to look for what is at the address
//     printf("at this address: %i\n", *p);
//     printf("the address: %p\n", p);
//     printf("the variable value: %i\n", n);
// }

//CHAR * = under the hood of a string
// int main(void)
// {
//     string s = "Hi!";
//     printf("%s\n", s);
// }

// in pure C without #include <cs50.h>, prints out the same string
// int main(void)
// {
//     char *s = "Hi!";
//     printf("%s\n", s);
//     printf("%p\n", s); //this line and below one shows the same address, since the 's' is pointer for the first letter of a string in a computer's memory.
//     printf("%p\n", &s[0]);
//     printf("%p\n", &s[1]);// and the next lines are returned addresses in order, since the letters stay in stack to represent a string.
//     printf("%p\n", &s[2]);
//     printf("%p\n", &s[3]);
// }


//one more example with 'char *'

int main(void)
{
    char *s = "Hi!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    // printf("%c\n", s[3]); here address for \0, which is not printable, so on the terminal you see empty spot.
}