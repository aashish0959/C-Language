#include <stdio.h>

int main() {
    int array1[100], array2[100], mergedArray[200], n1, n2, mergedSize;

    // Input for the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    // Input for the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    // Merging arrays
    mergedSize = n1 + n2;
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = array2[i];
    }

    // Output the merged array
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
