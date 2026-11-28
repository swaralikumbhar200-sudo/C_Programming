/*
Write a program which accept string from user and display it in reverse order.
Input : "MarvellouS"
Output : "SuollevraM"
*/


#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char cTemp = '\0';

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while(iStart < iEnd)
    {
        cTemp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = cTemp;

        iStart++;
        iEnd--;
    }

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Revese string is: %s\n",arr);

    return EXIT_SUCCESS;
}