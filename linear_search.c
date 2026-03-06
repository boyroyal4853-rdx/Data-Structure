#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30, found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element not found\n");
    }
    return 0;
}