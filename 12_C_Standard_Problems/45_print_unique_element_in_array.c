#include <stdio.h>

void Unique(int arr[], int len);

int main() {
    int array[] = {1, 2, 1, 1, 3, 2, 4, 2, 4, 4, 6, 4, 5, 7, 8, 5, 8, 9, 0};
    int length = sizeof(array) / sizeof(array[0]);
    char chr = 'B';
    printf("char is %c", chr);
    return 0;
    // Unique(array, length);
    return 0;
}

void Unique(int arr[], int len)
{
    int foundUnique;

    for (int i = 0; i < len; i++) {
        foundUnique = 1;        // Assume arr[i] is unique
        
        for (int j = 0; j < len; j++) {
            if (arr[i] == arr[j] && i != j) {
                foundUnique = 0; // Found a duplicate
                break;
            }
        }

        if (foundUnique) {
            printf("%d is a unique element.\n", arr[i]);
        }
    }
}