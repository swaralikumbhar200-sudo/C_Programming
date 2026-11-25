/*
Write a program which accept string from user and convert it lower case
Input:  "Marvellous Multi OS"
Output:  marvellous multi os
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}