
#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of elements in the array is: %d\n", sum);

    return 0;
}
