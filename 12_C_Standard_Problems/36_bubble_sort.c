// Bubble sort algorithms 

#include<stdio.h>
void BubbleSort(int array[], int len);
int sorted[10];
int t = 0;
int main()
{
    int arr[] = {1,4,2,3,6,5,7,9,8};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("Given array is:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    BubbleSort(arr, length);
    printf("\nSorted array is:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

void BubbleSort(int array[], int len)
{
    for (int i = 0; i < len; i++)    //  1,4,9,2,3,6,5,7,8
    {
        for (int j = 0; j < (len-1) ; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j]  =array[j+1];
                array[j+1] = temp;
            }
        }
        len -=1;  // which reduce the compile time for sorted elements 
    }
}