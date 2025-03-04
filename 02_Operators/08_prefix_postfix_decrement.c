#include<stdio.h>

int main()
{
    int a = 10, b;
    b = --a;
    printf("\nAfter prefix decrement:\n");
    printf("\na = %d,\tb = %d\n", a, b);

    a = 10;
    b = a--;
    printf("\nAfter postfix decrement:\n");
    printf("\na = %d,\tb = %d\n", a, b);
    return 0;
}