//Write a c program that accepts an integer from the user and 
//determines whether the entered number is positive or negative
//Expected output :
//Input : 15    -> Positive number
//Input : -8    -> Negative number
//Input : 0     ->  Zero

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo < 0 )
    {
        printf("Negative number \n");
    }
    else if (iNo > 0)
    {
        printf("Positive number \n");
    }
    else
    {
        printf("Zero \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d" , &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}