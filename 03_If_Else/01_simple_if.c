#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if (x > 100)
    {
        printf("Given number is greater than 100\n");
    }
    return 0;
}