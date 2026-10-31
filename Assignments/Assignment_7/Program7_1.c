/*write a program which accept number from user and print that number of $ & * on screen.
Input : 5
output : $  *   $   *   $   *   $   *   $   *
Input : -3
output : $  *   $   *   $   * 
*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("$\t*\t");
    }

    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}