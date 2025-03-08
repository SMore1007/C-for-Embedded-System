#include<stdio.h>

int main()
{
    int pos = 0;
    int neg = 0;
    int zero = 0;
    int arr[10] = {1,-2,3,4,0,5,23,-45,0, -9};

    int len = sizeof(arr)/ sizeof(arr[0]);
    printf("Len: %d\n",len);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
    }
    printf("Positive Numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeros: %d\n", zero);
    return 0;

    
}