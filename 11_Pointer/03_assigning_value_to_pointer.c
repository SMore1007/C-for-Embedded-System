#include<stdio.h>

int main()
{
    int a = 1;
    int *p;
    int *q;
    p = &a;
    q = p;
    *q = 5;
    printf("Assiging value to pointer: %d", *p);
    return 0;
}