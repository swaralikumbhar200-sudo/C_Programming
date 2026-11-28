/*
Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital.In other cases display as it is.
Inpput : q
Input : m
Output : M
Input : 4
Output : 4
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n",tolower(ch));
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n",toupper(ch));
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}