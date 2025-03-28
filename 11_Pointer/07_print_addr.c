#include<stdio.h>
int main()
{
    int a = 10;  // int var
    int *p;     // Pointer var
    p = &a;     // Assigning addr to pointer var

    printf("Addr of a: %p", p);
    return 0;
}