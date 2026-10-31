/*write a program to find factorial of given number.
Input : 5
Output : 120       (5*4*3*2*1)
Input : -5
Output : 120       (5*4*3*2*1)
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0 , iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d" , &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number id %d\n",iRet);

    return 0;
}