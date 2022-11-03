#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{

    if(argc != 2)
    {
        //case if something went wrong
        printf("Missing command-line arguments\n");
        //to exite out of it(to abort programm )return value that 's not a zero. Since returned zero values means all went well.
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    //returned 0 means all went well, no error occured
    return 0;
}