#include<stdio.h>
#include<stdint.h>


int num;
int count = 0;
int main()
{
    int arr[15] = {10,10,12,323,12,23,32,13,3,23,13,2,12,24,3};
    printf("\nGiven array is\n");
    for (uint8_t i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter a number to count in array\n");
    scanf("%d", &num);
    for (uint8_t i = 0; i < 15; i++)
    {
        if (arr[i] == num)
        {
             count++;
        }
    }
    printf("The Number %d comes %d times..", num, count);

    return 0;
}