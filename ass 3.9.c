#include <stdio.h>

void copy_array(int *arr1, int *arr2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int main() {
    int arr1[10], arr2[10], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter array1 elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    copy_array(arr1, arr2, n);
    printf("Array1: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray2: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
