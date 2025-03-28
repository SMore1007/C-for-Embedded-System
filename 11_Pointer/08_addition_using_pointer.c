#include<stdio.h>

void arrAddition(int arr[], int len, int *sum)
{
    for (int i = 1; i < len; i++)
    {
        *sum+=arr[i];
    }
}

int main()
{
    int array[] = {12,4,8,4};
    int sum = array[0];
    int length = sizeof(array)/ sizeof(array[0]);
    arrAddition(array, length, &sum);
    printf("Sum of array elements: %d", sum);
    return 0;
}