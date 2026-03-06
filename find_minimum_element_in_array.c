#include <stdio.h>

int main()
{
    int arr[] = {12, 5, 7, 25, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);
    return 0;
}