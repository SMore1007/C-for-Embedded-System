#include<stdio.h>

int main()
{
    int sum = 0;
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    for (int i = 0; i < arr; i++)
    {
        sum += arr[i];
    }
    printf("Sum: %d", sum);
    return 0;
}