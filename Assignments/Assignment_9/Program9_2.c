/*
Accept amount in US dollar and return its corresponding value in Indian currency.
consider 1$ as 70 rupees.
Input : 10
Output : 700
Input : 3
Output : 210
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d" , &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return 0;
}