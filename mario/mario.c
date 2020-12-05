#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    //USER INPUT
    do
    {
        height = get_int("What is the height of your pyramid: ");
    }
    while(height <1 || height >8 );
    

    //HEIGHT OF PYRAMID
    for ( int i = 0; i < height; i++)
    {
        //NUMBER OF SPACES
        for(int j = height-1; j>i; j--)
        {
            printf(" ");
            
        }
        
        //HASHES
        for (int j=0; j<=i; j++)
            {
                printf("#");
            }
        //NEW LINE
        printf("\n");
    }
    
    
}