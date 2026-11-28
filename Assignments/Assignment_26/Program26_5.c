/*
Accept character from user and display its ASCII value in decimal, octal and hexa decimal format.
Input : A
Output : Decimal        65
         Octal          0101
         Hexadecimal    0X41
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %#o\n",ch);
    printf("Hexadecimal : %#x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}