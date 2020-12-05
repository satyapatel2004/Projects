#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{   
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int i = 0;
    int n = strlen(argv[1]);
    for( i = 0; i < n; i ++)
    {
        if isalpha(argv[1][i])
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    if(argc == 2)
    {
        string plaintext = get_string("plaintext: ");
        int numkey = atoi(argv[1]);
        int j = 0;
        printf("ciphertext: ");
        for( j=0; j < strlen(plaintext); j++)
        {
            if isupper(plaintext[j])
            {
                printf("%c", (((plaintext[j] + numkey) - 65) % 26) + 65);
            }
            else if islower(plaintext[j])
            {
                printf("%c", (((plaintext[j] + numkey) - 97) % 26) + 97);
            }
            else
            {
                printf("%c", plaintext[j]);
            }
        }
    }
    printf("\n");
}