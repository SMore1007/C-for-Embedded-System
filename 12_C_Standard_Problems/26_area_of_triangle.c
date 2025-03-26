#include<stdio.h>

int main()
{
    double radius = 0;
    double PI = 3.141592;
    printf("Enter a radius: \n");
    scanf( " %lf", &radius);
    double area = PI * radius * radius;
    printf("area: %f \n", area);
    return 0;
}