#include<stdio.h>

void merge_array(int arr1[], int l1, int arr2[], int l2);
void sortTheMergedArray(int merged[], int len);
int a1[] = {11, 12, 16, 14, 15};
int length1 = sizeof(a1) / sizeof(a1[0]);
int a2[] = {16, 17, 18, 19, 20};
int length2 = sizeof(a2) / sizeof(a2[0]);

int mergedArray[sizeof(a1) / sizeof(a1[0]) + sizeof(a2) / sizeof(a2[0])];
int Sort[];
int main()
{
    merge_array(a1, length1, a2, length2);
    
    printf("Array 1 is: \n");
    for (int i = 0; i < length1; i++) {
        printf("%d ", a1[i]);
    }

    printf("\nArray 2 is: \n");
    for (int i = 0; i < length2; i++) {
        printf("%d ", a2[i]);
    }

    printf("\nMerged array is: \n");
    for (int i = 0; i < length1 + length2; i++) {
        printf("%d ", mergedArray[i]);
    }
    sortTheMergedArray(mergedArray, length1+length2);
    printf("\n sorted the Merged array: \n");
    for (int i = 0; i < length1 + length2; i++) {
        printf("%d ", mergedArray[i]);
    } 
}

void merge_array(int arr1[], int l1, int arr2[], int l2)
{
    int i, j;
    // Copy elements from arr1 to mergedArray
    for (i = 0; i < l1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from arr2 to mergedArray
    for (j = 0; j < l2; j++) {
        mergedArray[i + j] = arr2[j];
    }
}

void sortTheMergedArray(int merged[], int len) {
    int temp;
    // Outer loop for each pass through the array
    for (int i = 0; i < len - 1; i++) {
        // Inner loop to compare and swap adjacent elements
        for (int j = 0; j < len - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
}