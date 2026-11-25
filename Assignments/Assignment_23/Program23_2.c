/*
Write a program which accept string from user and convert it upper case
Input:  "Marvellous Multi OS"
Output:  MARVELLOUS MULTI OS
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}