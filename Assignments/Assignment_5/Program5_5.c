//Accept a single character and determine whether it is an uppercase alphabet,lowercase alphabet,digit,or special character.Use character comparisons without using library character-classification functions
//Expected Output
//Input : A   -> Uppercase Alphabet
//Input : m   -> Lowercase Alphabet
//Input : 7   -> Digit 
//Input : @   -> Special character

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
}

int main()
{
    char cValue ='\0';
    
    printf("Enter a character: ");
    scanf(" %c",&cValue);

    CheckCharacterType(cValue);
    
    return EXIT_SUCCESS;
}