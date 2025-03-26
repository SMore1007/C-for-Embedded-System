#include<stdio.h>


void Insersion_Sort(int arr[], int len);
int array[] = {12,10,23,25,22,50,34};
int main()
{
    
    int len = sizeof(array) / sizeof(array[0]);
    Insersion_Sort(array, len);
    printf("Sorted array is: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    
    // return 0;
}

void Insersion_Sort(int arr[], int len)
{
    int temp = arr[0];
    for (int i = 1; i < len; i++)
    {
        for (int j = i; i < len; j++)
        {
            if (temp  > arr[j])
            {
                arr[i]  = arr[j];
            }
        }
    }
}