1].Displaying give data
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;       // pointer to hold base address of array
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // dynamically allocate memory for n integers
    arr = (int*) malloc(n * sizeof(int));

    // check if memory was allocated successfully
    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    // input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // display array elements
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // free dynamically allocated memory
    free(arr);

    return 0;
}
