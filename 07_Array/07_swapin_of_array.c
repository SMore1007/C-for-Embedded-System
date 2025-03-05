#include<stdio.h>
int main()
{
    int arr1[5] = {12,13,14,15,16};
    int arr2[5] = { 1, 1, 1, 1, 1};

    printf("\narray 1\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\narray 2\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\nSwaping Process\n");
    for (int i = 0; i < 5; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("\nafter swaping array 1\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nAfter swaping array 2\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;   
}