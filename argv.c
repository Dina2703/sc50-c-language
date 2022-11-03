#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    //2 means the second word typed into command line
    if(argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}