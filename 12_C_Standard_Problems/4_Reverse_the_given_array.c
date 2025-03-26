// reverse the given array

#include<stdio.h>
int main()
{
    int arr[] = {12,23,34,45,56,67,78};
    int len = sizeof(arr) / sizeof(arr[0]); // len = 7
    printf("Length of the array is: %d\n", len);
    int rev[len];
    for(int i = (len - 1); i >= 0; i--)
    {
        rev[(len- i) -1] = arr[i]; 
    }

    printf("revrsed array is: \n");
    for(int i = 0; i < len; i++)
    {
        printf("%d, ", rev[i]);
    }
}