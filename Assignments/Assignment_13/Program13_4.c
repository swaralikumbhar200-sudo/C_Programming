/*
Write a program which accept number from user and return multiplication of all digits
Input : 2395
Output : 270
Input : 1018
Output : 0
Input : 9441
Output : 144
Input : 922432
Output : 864
*/

#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iMult = 1 , iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}