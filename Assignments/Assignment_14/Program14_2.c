/*
write a program which accept number from user and display its factors decreasing order.
Input :  12
Output : 6  4  3  2  1
Input : 13
Output : 1
Input : 10
Output : 5  2  1
*/

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = iNo/2 ; iCnt >= 1 ;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }    
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}