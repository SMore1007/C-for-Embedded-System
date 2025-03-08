#include <stdio.h>

int main() {
    int n, i, ele, pos;
    int arr[11];  // Declaring an array with size 11 to allow insertion of one extra element

    // Taking the initial number of elements in the array (max allowed is 10)
    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    // Checking if the user is trying to exceed the maximum allowed size
    if (n >= 10) {
        printf("Cannot insert more elements. Max size reached!\n");
        return 1;  // Exit the program with an error code
    }

    // Taking input for the initial array elements
    printf("\nEnter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking input for the element to be inserted and its position
    printf("Enter the element to add and its position (0 to %d): ", n);
    scanf("%d %d", &ele, &pos);

    // Validate the given position to prevent out-of-bounds insertion
    if (pos < 0 || pos > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;  // Exit the program if the position is invalid
    }

    // Shifting elements to the right to make space for the new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = ele;  // Inserting the new element at the specified position
    n++;  // Incrementing the number of elements in the array

    // Displaying the updated array after insertion
    printf("New array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;  // Indicating successful execution
}
