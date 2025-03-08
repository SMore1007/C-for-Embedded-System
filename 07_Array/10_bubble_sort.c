#include<stdio.h>

int main()
{
    int arr[10] = {10,20,4,130,23,34,23,43,87,6};
    int len = sizeof(arr)/ sizeof(arr[0]);
    printf("Given array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nBubble sorted array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}