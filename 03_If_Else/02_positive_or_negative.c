#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("Given number is Positive number\n");
    }
    else if(x < 0)
    {
        printf("Given number is Negative\n");
    }
    else
    {
        printf('Given number is zero');
    }
    
}