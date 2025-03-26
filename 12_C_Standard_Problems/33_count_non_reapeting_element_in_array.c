// calculate non repeating elements in the array

#include<stdio.h>
int CountNonRepeatingElementInArray(int arr1[], int len);
int arr[10];
int t = 0;
int main()
{
    int array[] = {1,2,2,3,4,5,6,6,6,4,7,7,8};
    int length = sizeof(array) / sizeof(array[0]);
    int result = CountNonRepeatingElementInArray(array, length);
    printf("Given array is:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\nNumber of non repeating elements in the array is: ");
    printf("%d\n", result);
    printf("non repeating array elements are: \n");
    for (int i = 0; i < result; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int CountNonRepeatingElementInArray(int arr1[], int len)
{
    int i, j, flag, count = 0;
    for (i = 0; i < len; i++)  //  {1,2,2,3,4,5,6,6,6,4,7,7,8};
    {
        flag = 0;
        for (j = 0; j < len; j++)
        {
            if(i != j && arr1[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            count +=1;
            arr[t] = arr1[i];
            t+=1;
        }
    }
    return count;
}