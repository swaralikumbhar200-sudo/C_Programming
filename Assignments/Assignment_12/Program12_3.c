/*
Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 922432
Output : 3
Input: 9000
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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
    scanf("%d", &iValue);

    bRet = CountTwo(iValue);

    printf("%d\n",bRet);

    return EXIT_SUCCESS;
}