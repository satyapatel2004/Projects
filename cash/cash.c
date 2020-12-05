#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {           //Prompts user for change owed to them
        n = get_float("OWED: ");
    }
    //Ensures that change values is not a negative
    while (n < 0);
    //Rounds Change
    n = round(n *100);
    int c =-1 ;
    while(n >= 0)
    {
        if(n>=25)
        {
            n-=25;
            c+=1;
        }
        else if(n >= 10)
        {
            n-=10;
            c+=1;
        }
        else if(n >= 5)
        {
            n-= 5;
            c+=1;
        }
        else
        {
            n-=1;
            c+=1;
        }
    }
    printf("you have %i coins",c );
}