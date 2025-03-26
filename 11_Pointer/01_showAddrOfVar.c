#include<stdio.h>
int main()
{
    int a = 5;
    int *pA;
    pA = &a;
    printf("Number: %d", *pA);
    printf("\tAddr: %u", pA);
    return 0;
}