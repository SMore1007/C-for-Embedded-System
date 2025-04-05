#include<stdio.h>

typedef union 
{
    int a;
    char b;
}UnionType_t;

int main()
{
    UnionType_t u1;

    u1.a = 65;
    UnionType_t *p;
    p = &u1;

    printf("%d,  %c", p->a, p->b);

}