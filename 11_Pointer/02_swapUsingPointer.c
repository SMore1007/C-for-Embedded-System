#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    printf("Before Swaing.....\n");
    printf("A = %d\n",  a);
    printf("B = %d\n", b);

    int *p;
    *p = a;
    a = b;
    b = *p;

    printf("After Swaing.....\n");
    printf("A = %d\n", a);
    printf("B = %d", b);
    
}