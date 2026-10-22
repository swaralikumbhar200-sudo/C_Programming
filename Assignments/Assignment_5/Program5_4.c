//Accept an integer and determine whether it is divisible by both 3 and 5, only3, only5, or neither
//Expected Output
//Input : 15   -> Divisible by Both
//Input : 9    ->  Divisible by 3 only
//Input : 10   ->  Divisible by 5 only
//Input :  7   ->  Not Divisible by either

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 5) == 0 && (iValue % 3) == 0)
    {
        printf("Divisible by both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 only\n");
    }
    else
    {
        printf("Not Divisible by either\n");
    }
}
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d" ,&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}