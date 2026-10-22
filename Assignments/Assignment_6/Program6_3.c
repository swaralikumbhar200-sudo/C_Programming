//Accept the total purchase amount an calculate the final payable amount after applying the following discount.Negative purchase amount are invalid.
/*
-----------------------------------------------------
    Purchase Amount                       Discount
-----------------------------------------------------
    Below Rs 1000                           0%
    Rs.1000 to below Rs.5000                10%
    Rs.5000 and above                       20%
---------------------------------------------------------
*/
//Expected Output
//Input : 800  -> Payable amount = 800
//Input : 2000 -> Payable amount = 1800
//Input : 6000 -> Payable amount = 4800

#include<stdio.h>
#include<stdlib.h>

void  CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <1000)
    {
        printf("Payable amount is: %.2f\n",fAmount);
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = ((fAmount * 10)/100);
        fFinalAmount = fAmount - fDiscount;

        printf("Payable amount is: %.2f\n",fFinalAmount);
    }
    else if(fAmount >= 5000) 
    {
        fDiscount = ((fAmount * 20)/100);
        fFinalAmount = fAmount - fDiscount;

        printf("Payable amount is: %.2f\n",fFinalAmount);
    }
    else
    {
        printf("Invalid Purchase amount");
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}