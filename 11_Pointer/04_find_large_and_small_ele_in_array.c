#include <stdio.h>

void findSmallestLargest(int *arr, int size, int *smallest, int *largest) {
    *smallest = *largest = *arr; // Initialize with first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *smallest) {
            *smallest = *(arr + i);
        }
        if (*(arr + i) > *largest) {
            *largest = *(arr + i);
        }
    }
}

int main() {
    int arr[] = {10, 5, 20, 8, 30, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest, largest;

    findSmallestLargest(arr, size, &smallest, &largest);

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
