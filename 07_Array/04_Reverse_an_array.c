#include<stdio.h>
#include<stdint.h>

#define arrIndex 10

int main()
{
    int sum = 0;
    
    int arr[arrIndex] = {10,20,30,40,50,60,70,80,90,100};
    printf("array before reverse\n");
    for (uint8_t i = 0; i < arrIndex; i++)
    {
        printf("%d ", arr[i]);
    }
    for (uint8_t i = 0; i < arrIndex/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arrIndex - i - 1];
        arr[arrIndex - i - 1] = temp;
    }

    printf("\narray after reverse\n");
    for (uint8_t i = 0; i < arrIndex; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}