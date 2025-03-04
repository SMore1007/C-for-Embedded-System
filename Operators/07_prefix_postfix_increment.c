#include<stdio.h>


int main()
{
    int  a = 10, b;

	b = ++a;
	printf( "\n After Prefix Increment  : " );
	printf( " a = %d and b = %d", a, b);

	a = 10;
	b = a++;
	printf( "\n After Postfix Increment : " );
	printf( " a = %d and b = %d", a, b);

	return 0;
 
}