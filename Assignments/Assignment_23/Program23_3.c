/*
Write a program which accept string from user and toggle the case.
Input:  "Marvellous Multi OS"
Output:  mARVELLOUS mULTI os
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(islower(*str))
        {
            *str = toupper(*str);
        }
        else if(isupper(*str))
        {
            *str = tolower(*str);
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}
