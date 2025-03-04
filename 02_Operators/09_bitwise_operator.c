/*
    0011 = 3
    & 
    0110 = 6
  -------------
    0010 = 2
*/

#include<stdio.h>
int main()
{
    int a = 3, b = 6, c;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    c = a & b; 
    /*
    0011 = 3
    & 
    0110 = 6
   -------------
    0010 = 2
    */
    printf("Bitwise &, c = %d\n", c);

    c = a | b; 
    /*
    0011 = 3
    | 
    0110 = 6
   -------------
    0111 = 7
   */
    printf("Bitwise |, c = %d\n", c);

    c = ~a; 
    /*
    0011 = 3
    ~
  -------------
    1100 = -4
*/
    printf("Bitwise ~, c = %d\n", c);

    c = a << 3; 
    /*
    0011 << 3
  -------------
 0011000 = 16 + 8 = 24
*/
    printf("Bitwise leftShift, c = %d\n", c);

    c = a >> 3; 
    /*
        0011 >> 3
    -------------
        0000,011 =  0 
    */
    printf("Bitwise rightShift, c = %d\n", c);

    return 0;
}