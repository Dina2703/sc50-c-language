#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many scores: ");
    //declare the variable for an array of 3 items
    int score[n];

   for(int i = 0; i < n; i++){
    score[i] = get_int("Score: ");
   }

    // score[0] = get_int("Score: ");
    // score[1] = get_int("Score: ");
    // score[2] = get_int("Score: ");

    //use 3.0 instead of 3 to turn integer type into float type by turning one of the participants into float type, C will treat others as float type as well, so C can compile it correctly and give you accurate average float number
    printf("Average: %f\n", (score[0] + score[1] + score[2]) /3.0);
}