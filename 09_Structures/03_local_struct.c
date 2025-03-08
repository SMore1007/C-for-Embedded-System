#include<stdio.h>

int main()
{
    // Local struct Declaration
    typedef struct 
    {
        int feet;
        float inch;
    }DistanceType_t;

    DistanceType_t d1; // Struct var

    d1.feet = 12;
    d1.inch = 13.45;

    printf("%d\n", d1.feet);
    printf("%.2f\n",d1.inch);

    return 0;
}