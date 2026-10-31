/*
write a program which accept distance in kilometer and convert it into meter(1km = 1000m)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDist = 0;

    iDist = iNo * 1000;
    return iDist;

}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter: %d\n",iRet);

    return 0;
}