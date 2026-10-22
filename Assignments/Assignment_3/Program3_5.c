//Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
//Input : E             Output : TRUE
//Input : d             Output : FALSE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cNo)
{
    if(cNo == 'a' || cNo == 'e' || cNo == 'i' ||
       cNo == 'o' || cNo == 'u' ||
       cNo == 'A' || cNo == 'E' || cNo == 'I' ||
       cNo == 'O' || cNo == 'U')
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

    printf("Enter character: \n");

    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}