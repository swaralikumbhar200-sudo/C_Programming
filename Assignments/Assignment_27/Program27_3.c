/*
Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
Input :  "MarvellouS"
Output : 6 (8-2)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCapital = 0 , iSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        else
        {
            iSmall++;
        }
        str++;
    }
    return(iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}