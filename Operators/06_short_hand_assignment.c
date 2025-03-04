#include<stdio.h>

int main()
{
    int num = 10;

    printf("\nnum:     %d", num);

    num+= 10;
    printf("\nnum+=10: %d", num);

    num-= 5;
    printf("\nnum-= 5: %d", num);

    num*= 2;
    printf("\nnum*2:   %d", num);

    num/=3;
    printf("\nnum/=3:  %d", num);

    return 0;
}