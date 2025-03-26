// Febonacci Secquence

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

// Here, the third term “1” is obtained by adding the first and second term. (i.e., 0+1 = 1)
// Similarly,
// “2” is obtained by adding the second and third term (1+1 = 2)
// “3” is obtained by adding the third and fourth term (1+2) and so on.
// For example, the next term after 21 can be found by adding 13 and 21. Therefore, the next term in the sequence is 34.

#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    int n1 = 0;
    int n2 = 1; 
    int n3 = 0; 
    printf("%d, %d, ", n1, n2);
    for(int i = 1; i < no; i++)      // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
    {
        n3 = n1 + n2;
        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;

    }
}