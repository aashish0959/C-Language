#include <stdio.h>

int main() {
    int array[100], n, max, second_max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = array[0];
    second_max = array[0];


    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            second_max = max;
            max = array[i];
        } else if (array[i] > second_max && array[i] != max) {
            second_max = array[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second_max);

    return 0;
}
