#include<stdio.h>

typedef struct 
{
    int feet;
    float inch;
}DistacneType_t;

DistacneType_t d1; // Gloable structure Var declarations
int main()
{
    d1.feet = 12;
    d1.inch = 15.6;

    printf("Feet: %d\n", d1.feet);
    printf("Inch: %f\n", d1.inch);
    return 0;
}