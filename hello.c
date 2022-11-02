#include <stdio.h>

//if you want to keep all functions  at the bottom, leave the the declarartion line at the top,but define it at the bottom, so computer can know that it exists. Otherwise it gonna give an error.
void meow(int n);




int main(void)
{
    //way1
    // int counter = 0;
    // while(counter < 3 )
    // {
    //     printf("meow\n");
    //     counter++;
    // }
    //way2
    //for counter use i (for integer count)
    // int i = 0;
    // while(i < 3 )
    // {
    //     printf("meow\n");
    //     i++;
    // }
    //way3
    // for(int i = 0; i < 3; i++ )
    // {
    //     printf("meow\n");
    // }
    //invoke meow() func
    {
    meow(4);
    }
}


//the first void means the function has no return value, and the second void means no arguments takes in.
void meow(int n)
{
  for(int i = 0; i < n; i++)
    printf("meow from the meow func\n");
}


