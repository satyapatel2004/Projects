#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Enter Text: ");
    
    int wcount = 1;
    int lcount = 0;
    int scount = 0;
    for (int i = 0; i < strlen(text); i++ )
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            lcount++;
        }
        
        else if (text[i] == ' ' || text[i] == '\0')
        {
            wcount++;
        }
        
        else if(text[i] == '.' || text[i] == '?' || text[i] == '!' )
        {
            scount++; 
            
        }
        
    }
    
    float rability = 0.0588 * (100 * (float) lcount / (float) wcount) - 0.296 * (100 * (float) scount / (float) wcount) - 15.8;
    
    if (rability < 16 && rability >= 0)
    {
        printf("Grade %i\n", (int) round(rability));
    }
    else if (rability >=  16)
    {
        printf("Grade 16+\n");
    
    }
    else
    {
        printf("Before Grade 1\n");
    }
}