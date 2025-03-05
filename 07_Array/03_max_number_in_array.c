#include<stdio.h>
int main()
{
    int sum = 0;
    int arr[10] = {200,20,30,40,50,60,70,80,90,100};

    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max: %d", max);
    return 0;
}