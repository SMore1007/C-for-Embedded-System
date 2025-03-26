// 1,2,3,4,5,6....
// 1+2 = 3
// 1+2+3 = 6
// 1+2+3+4 = 10

#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    int number = 0;
    printf("Enter a number last number for making the sum: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        number+=i;
    }
    printf("\n The sum of the %d natural number is: %d\n", n, number);   
    int resultFromRecursion = sum(n);
    printf("Result using Recursion: %d\n", resultFromRecursion);
}

int sum(int n)
{
    if (n>0)
    {
        return n + sum(n-1);
    }else{
        return 0;
    }
}