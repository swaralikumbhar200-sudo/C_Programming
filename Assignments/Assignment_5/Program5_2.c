//Accept a year and determine whether it is a leap year according to Gregorian calender rules.A year is a leap year if it is divisible by 400,or divisible by 4 but not by 100.Consider years leass than or equal to zero invalid.
//Expected output :
//Input : 2024   -> Leap year
//Input : 1900   -> Not a leap year
//Input : 2000   -> Leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid year\n");
    }
    else if(iYear % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if(iYear % 100 ==0)
    {
        printf("Not a leap year\n");
    }
    else if(iYear % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Invalid year\n");
    }
}

int main()
{
    int iYear =0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}