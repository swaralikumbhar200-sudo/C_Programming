//Accept one number from user and print the number of * on screen

#include<stdio.h>

void Display(int iNo)
{
    //Write Updater
    while (iNo > 0)
    {
        printf("*");
        iNo--;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}