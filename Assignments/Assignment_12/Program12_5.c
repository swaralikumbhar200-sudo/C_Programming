/*
Write a program which accept number from user and count frequency of such a digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;

}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = Count(iValue);

    printf("%d\n",bRet);

    return EXIT_SUCCESS;
}