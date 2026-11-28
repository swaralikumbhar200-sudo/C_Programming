/*
Accept Character from user and check whether it is small case or not(a-z)
Input :  9
Output : TRUE
Input : D
Output : FALSE
*/


#include <stdlib.h>
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case Character\n");
    }
    else
    {
        printf("It is not a small Character\n");
    }

    return EXIT_SUCCESS;
}