#include<stdio.h>

float KilToMil(int kil);
int main()
{
    int kil;
    printf("Enter a Killometer: ");
    scanf("%d", &kil);
    float miles = KilToMil(kil);
    printf("%d Kilometer is equal to %f miles\n", kil, miles);
}

float KilToMil(int kil)
{
    float mil = kil * 0.62137119;
    return mil;
}