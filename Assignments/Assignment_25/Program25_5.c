/*
Accept division of stdent from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8:30 AM
C at 9.20 AM and D at 10.30 AM(Application should be case insensitive)
Input : C
Otput : Your exam at 9.20 AM
Input : d
Otput : Your exam at 10.30 AM
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    chDiv = toupper(chDiv);

    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8:30 AM\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9:20 AM\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10:30 AM\n");
    }
    else
    {
        printf("Invalid division");
    }
}

int main()
{
    char cValue ='\0';
    

    printf("Enter your devision: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}