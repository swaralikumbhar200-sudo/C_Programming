//Accept three integers and determine the greatest number among them. The program must also work correctly when two or all three numbers are equal.
//Expected output :
//Input : 10 50 30    -> 50 is Greatest
//Input : 40 40 20    -> 40 is Greatest
//Input : 15 15 15    -> 15 is Greatest

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("Greatest number is: %d\n",iFirst);
    }
    else if((iFirst < iSecond) && (iSecond > iThird))
    {
        printf("Greatest number is: %d\n",iSecond);
    }
    else if((iFirst < iThird) && (iSecond < iThird))
    {
        printf("Greatest number is: %d\n",iThird);
    }
    else if ((iFirst == iSecond) && (iSecond == iThird))
    {
        printf("All numbers are equal\n");
    }
    else
    {
        printf("Some numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}