#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("a  = %d\n", a);
    printf("*p = %d\n", *ptr);
    printf("p  = %p\n", ptr);
    printf("&a = %p\n", &a);
}