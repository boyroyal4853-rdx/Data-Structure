#include <stdio.h>

int main() {
    int arr[10][10], n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Upper Triangular Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j >= i)
                printf("%d ", arr[i][j]);
            else
                printf("  ");  // for spacing
        }
        printf("\n");
    }

    return 0;
}