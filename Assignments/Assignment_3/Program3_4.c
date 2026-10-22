//Accept one character from user and convert case of that character
//Input : a             Output : A
//Input : D             Output : d

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c\n", cValue);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c\n", cValue);
    }
    else
    {
        printf("Not an alphabet\n");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Character: \n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}