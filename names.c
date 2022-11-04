#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string names[] = {"Bill", "Fred", "George", "Ginny", "Percy", "Ron"};

    for(int i = 0; i < 6; i ++)
    {
        //from the documentation '0 if s1 is the same as s2', so we have to check the returned result if it's equal to 0;
        if(strcmp( names[i],"Ginny") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found");
    return 1;
}