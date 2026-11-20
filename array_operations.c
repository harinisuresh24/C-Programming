
#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    int largest, smallest;
    float average;

    // Input array elements
    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    // Calculate sum and find largest and smallest
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];

        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    average = sum / 5.0;

    // Display results
    printf("\n--- ARRAY REPORT ---\n");

    printf("Array elements: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);
    printf("\nLargest = %d", largest);
    printf("\nSmallest = %d\n", smallest);

    return 0;
}
