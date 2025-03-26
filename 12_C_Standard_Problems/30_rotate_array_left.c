// aray before 
// Index: 0 1 2 3 4 5 
// array: 3 9 8 1 7 6

// aray after
// Index: 0 1 2 3 4 5 
// array: 9 8 1 7 6 3

#include<stdio.h>
int RotatedArray[10];
void RotateToLeft(int a1[], int len, int n);
int main()
{
    int n;
    int array[] = {3,9,8,1,7,6};
    int len = sizeof(array) / sizeof(array[0]);
    while (1)
    {
        printf("Enter a number for array rotation in Left: \n");
        scanf("%d", &n);
        RotateToLeft(array, len, n); 
        printf("array Befor : \n");
        for (int i = 0; i < len; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
        printf("array after : \n");
        for (int i = 0; i < len; i++)
        {
            printf("%d ", RotatedArray[i]);
        }
            printf("\n"); 
            // Replace the a1 array with rotated new one
        for (int i = 0; i < len; i++)
        {
            array[i] = RotatedArray[i];
        }
    }
}

void RotateToLeft(int a1[], int len, int n)
{
    int temp[len];
    printf("Temp array: \n");
    for (int i = 0; i < n; i++)
    {
        temp[i] = a1[i];
        printf("%d ", temp[i]);
    }
    printf("\n");
    printf("Rotated array\n");
    for (int i = 0; i < (len- n); i++)
    {
        RotatedArray[i] = a1[i+n];
        printf("%d ", RotatedArray[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) // 2
    {
        RotatedArray[len - n + i] = temp[i ];     
    }
}