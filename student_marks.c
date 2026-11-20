
#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    int highest = 0;
    int topper = 0;
    float average;

    // Input marks
    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];

        if(marks[i] > highest)
        {
            highest = marks[i];
            topper = i + 1;
        }
    }

    // Calculate average
    average = total / 5.0;

    // Display report
    printf("\n--- STUDENT MARKS REPORT ---\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Topper: Student %d\n", topper);

    return 0;
}
