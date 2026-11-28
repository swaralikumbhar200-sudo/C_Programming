/*
Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255.
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0 ; i <= 255 ; i++)
    {
        printf("%c\t%d\t%x\t%o\n",i,i,i,i);
    }

}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}