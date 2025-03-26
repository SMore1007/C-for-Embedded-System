// Count the occurance of the values in the array
#include<stdio.h>

int fun(int arr[],int value, int len);  //fun declaration

// main func
int main()
{
    int value;
    printf("Enter a value: \n");
    scanf("%d", &value);
    int arr[] = {1,2,3,2,3,2,1,2,3,4,5,6,7,8,9,10};  // array declaration
    int len = sizeof(arr) / sizeof(arr[0]);          // lenght of the array
    int no = fun(arr, value, len);
    printf("The value %d comes %d times in the array.\n", value, no);
}

int fun(int arr[],int value, int len)
{
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == value)
        {
            count+=1;
        }
    }
    return count;
}