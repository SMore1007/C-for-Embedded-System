#include<stdio.h>

int findMax(int arr[], int len);
int main()
{
    int arr[] = {12,21,22,1,23,43,67,45,34,45,6,89};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Length of the array is: %d\n", len);
    int max = findMax(arr, len);
    printf("Maximum number in the array is: %d\n", max);
}

int findMax(int arr[], int len)
{
    int num = arr[0];
    for(int i = 1; i < len; i++)
    {
        if(num < arr[i])
        {
            num = arr[i];
        }
    }
    return num;
}