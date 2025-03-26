// Write a program that asks the user to enter 2 integer numbers and 
// prints the result and remainder of the integer division of both 
// numbers and the real quotient 

#include<stdio.h>
#include<stdint.h>

// ------------- 
// |   1 |  22 | 
// |-----------| 
// |  33 |   4 | 
// |-----------| 
// |   5 |   6 | 
// ------------- 
int main()
{
    int n1,n2, n3,n4,n5,n6;
    printf("Enter a number: ");
    scanf(" %d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6);
    printf("----------\n|%d | %d |\n----------\n|%d | %d |\n----------\n|%d | %d |", n1, n2, n3, n4, n4, n5, n6);
    // int remender;
    // int quotient;
    // int integer_quotient;
    // printf("Enter a numbers: ");
    // scanf("%d %d", &n1, &n2);
    // remender = n1 % n2;
    // quotient = n1 / n2;
    // integer_quotient = n1 / n2;
    // printf("Remender: %d\n", remender);
    // printf("quotient %d\n",quotient);

}