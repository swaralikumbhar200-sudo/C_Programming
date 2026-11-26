/*
Write a program which accept three numbers and print its multiplication.
Input : 5   4   7
Output : 140
Input : 5   0   7
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;

}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multipliction is : %d\n",iRet);

    return EXIT_SUCCESS;
}