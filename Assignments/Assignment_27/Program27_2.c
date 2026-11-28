/*
Write a program which accept string from user and count number of small letters.
Input :  "Marvellous"
Output : 9
*/

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}