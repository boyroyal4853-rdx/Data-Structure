// #include <stdio.h>

// int main()
// {
//     int arr[] = {12, 5, 7, 25, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Minimum element: %d\n", min);
//     return 0;
// }



// Start.

// Assume the first element is minimum.

// Compare it with every element in the array.

// If a smaller element is found, update the minimum.

// Repeat until the end of the array.

// Print the minimum value.

// End.


// #include <stdio.h>

// int main() {
//     int arr[100], n, i, min;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     min = arr[0];   // assume first element is minimum

//     for(i = 1; i < n; i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     printf("Minimum element in array = %d", min);

//     return 0;
// }