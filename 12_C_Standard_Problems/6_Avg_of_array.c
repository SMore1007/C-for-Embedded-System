#include<stdio.h>
int fun(int arr[], int len);
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int len = sizeof(arr) / sizeof(arr[0]);
    int avg = fun(arr, len);
    printf("Avg of the given array is: %d", avg);

}

int fun(int arr[], int len)
{
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return (sum / len);
}