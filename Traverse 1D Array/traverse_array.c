#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Taking input from user
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Traversing and printing array
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}