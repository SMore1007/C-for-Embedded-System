// If we list all the natural numbers below 10that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
// The sum of these multiples is 23
// Find the sum of all the multiples of 3 or 5 below 1000

#include<stdio.h>
#include<stdint.h>
int arr[500] = {};
int a = 0;
void Numbers(int n);
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        Numbers(i);
    }   
    printf("TOtal count is: %d\n", a);
    printf("\nprint the array of the elements having 3 and 5 as factors\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Numbers(int n)
{
    if(n % 3 == 0 || n % 5 == 0)
    {
        arr[a] = n;
        a++;
    }
}