#include<stdio.h>
void Rotate_ones_right(int arr[], int length);
int main(void)
{
    int a1[] = {1,2,3,4,5,6};
    int length = sizeof(a1) / sizeof(a1[0]);
    printf("Prevois array is: \n");
    for (int i = 0; i < length; i++)
    {
       printf("%d ", a1[i]);
    }
    // Function calling 
    Rotate_ones_right(a1, length);
    printf(" \n Rotated array is \n");
    for (int i = 0; i < length; i++)
    {
       printf("%d ", a1[i]);
    }
    return 0;
}

void Rotate_ones_right(int arr[], int length)
{
    int temp = arr[length - 1];
    for (int i = (length- 2); i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}