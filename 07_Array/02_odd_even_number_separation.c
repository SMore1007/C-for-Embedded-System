#include<stdio.h>

int main()
{
    int sum = 0;
    int arr[10] = {13,20,30,43,50,61,70,87,90,99};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf ("Odd number: %d\n", arr[i]);
        }else
        {
            printf("Even Number: %d\n", arr[i]);
        }
    }
    return 0;
}