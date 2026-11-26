/*
Write a program which accept number from user and return summation of all non factors.
Input :  12
Output : 50
Input : 10
Output : 37
*/

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt ;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}