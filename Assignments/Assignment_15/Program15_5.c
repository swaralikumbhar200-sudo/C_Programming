/*
Write a program which accept total marks and obtained marks from user and calculate percentage.
Input :  1000   745
Output : 74.5 %
*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    if ((iNo2 < 0) || (iNo1 <= 0) ||(iNo2 > iNo1))
    {
        return -1;
    }

    float iPercent = 0;

    iPercent = ((float)iNo2 /(float) iNo1) * 100;

    return iPercent;

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    if(fRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Percentage is : %.1f%%\n",fRet);
    }

    return EXIT_SUCCESS;
}