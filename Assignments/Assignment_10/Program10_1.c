/*
write a program which accept radius of circle from user and calculate its area.
consider value of PI as 3.14 (Area = PI * Radius * Radius)
Input : 5.3
output : 88.2026
Input : 10.4
output : 339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    double Area = 0;

    Area = 3.14 * fRadius *fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f" , &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4f\n",dRet);

    return 0;
}