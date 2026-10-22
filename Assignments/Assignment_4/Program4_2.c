//Accept an integer from the user and determines whether it is even or odd.
//An even number is completely divisible by 2
//Expected output :
//Input : 24    -> Even number
//Input : 17    -> Odd number

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}