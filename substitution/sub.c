#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main( int argc, string argv[])
{
    if(argc > 2|| argc == 1)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    
    
    if(strlen(argv[1]) > 26)
    {
        printf("The key must contain 26 characters");
        return 2;
    }
    
    else
    {
        string ptext = get_string("plaintext: ");
        for(int i = 0; i < strlen(argv[1]); i ++)
        {
            printf();
        }
    }
}