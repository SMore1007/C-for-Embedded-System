#include<stdio.h>
void fun(  int *p)
{
    *p = 0;
}

int main()
{
     int i = 10; // can not chage the content of the i throughout the program

    fun(&i);

    printf("Updated value using pointer: %d", i);
    return 0;
}