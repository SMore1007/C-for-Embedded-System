#include<stdio.h>

struct OurNode{
    char x, y, z;
};

int main()
{
    struct  OurNode p = {'1', '0', 'c'};
    struct OurNode *q;
    q = &p;

    printf("%c, %c, %c", *((char*)q+1), *((char*)q+2));
    return 0;
    
}