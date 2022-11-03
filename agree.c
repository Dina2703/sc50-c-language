#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user to agree
    char c = get_char("Do you agree? ");

    //Check whether user agreed. for single char type use ' 'single quote, for string type use " " double quote.
    if(c == 'y' || c == 'Y')
    {
        printf("User agreed\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("User not agreed\n");
    }

}
