//Accept the marks of a student out of 100 and display the grade according to the following criteria.Marks outside 0-100 are invalid.
/*---------------------------------------
        Marks           Grade
-----------------------------------------
        90-100            A
        75-89             B
        60-74             C
        40-59             D
        Below 40          Fail   
------------------------------------------     
*/
//Expected Output
//Input : 85   -> Grade B
//Input : 35   -> Fail
//Input : 105  -> Invalid Marks

#include<stdio.h>
#include<stdlib.h>
void DisplayGrade(float fMarks)
{
    if((fMarks <= 100) && (fMarks >= 90))
    {
        printf("Grade A\n");
    }
    else if((fMarks <= 89) && (fMarks >= 75))
    {
        printf("Grade B\n");
    }
    else if((fMarks <= 74) && (fMarks >= 60))
    {
        printf("Grade C\n");
    }
    else if((fMarks <= 59) && (fMarks > 40))
    {
        printf("Grade D\n");
    }
    else if(fMarks <= 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}