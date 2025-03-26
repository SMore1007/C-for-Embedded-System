// Find the minimum number in the array

#include<stdio.h>
int func1(int arr[], int size);

int main()
{
    int arr[] = {5, 9, 10, 11, 3, 23};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Length of the array: %d\n", len);
    int output = func1(arr, len);
    printf("Minimum number in the array is: %d\n", output);
    return 0;
}

int func1(int arr[], int size)
{
    int num1 = arr[0]; 
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < num1)
        {
            num1  = arr[i];
        }
    }
    return num1;
}