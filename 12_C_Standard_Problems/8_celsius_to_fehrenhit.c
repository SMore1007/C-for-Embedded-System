// Celcius to fehrnheit
// f = (c * (9/5) + 32)

#include<stdio.h>

float Fun1(int cel);

int main()
{
    int deg;
    printf("Enter a degree\n");
    scanf("%d", &deg);
    int feh = Fun1(deg);
    printf("Degree is: %d and fehrnheit is: %d", deg, feh);
}
float Fun1(int cel)
{
    return (cel *(9/5) + 32);
}