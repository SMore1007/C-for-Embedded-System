#include<stdio.h>
int hcf(int a, int b);
int main()
{
    int num1 = 55;
    int num2 = 35;
    int result_hcf = hcf(num1, num2);
    printf("HCF of %d and %d is: ", num1, num2);
    printf("%d\n", result_hcf);
    return 0;
}

int hcf(int a, int b)
{
    while (b!=0)                    
    {                               
        int temp = b;              
        b = a % b;
        a = temp;
    }
    return a;
}
