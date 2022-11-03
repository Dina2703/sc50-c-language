#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//using build-in toUpper func from <ctype.h> file

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}





// using custom toUppercase function
// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for(int i = 0,  n = strlen(s); i < n; i++)
//     {
//         if(s[i] >= 'a' && s[i] <= 'z')
//         {
//            printf("%c", s[i]- 32);
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
// }

