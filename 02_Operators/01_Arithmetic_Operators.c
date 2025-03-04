// Arithmatic Operations

#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 2, b = 3;
    int sum, sub, mul, rem, dev;
    float rdiv;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    dev = a / b;
    rem = a % b;
    rdiv = (float)a  / (float)b;
    printf("Sum is: %d\n", sum);
    printf("Sub is: %d\n", sub);
    printf("Mul is: %d\n", mul);
    printf("dev is: %d\n", dev);
    printf("rem is: %d\n", rem);
    return 0;
}