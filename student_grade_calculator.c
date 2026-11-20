
#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float average;

    printf("===== STUDENT GRADE CALCULATOR =====\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    average = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nAverage = %.2f", average);

    if(average >= 90)
    {
        printf("\nGrade: A");
    }
    else if(average >= 80)
    {
        printf("\nGrade: B");
    }
    else if(average >= 70)
    {
        printf("\nGrade: C");
    }
    else if(average >= 50)
    {
        printf("\nGrade: D");
    }
    else
    {
        printf("\nGrade: F");
    }

    return 0;
}
