#include <stdio.h> 
 
int  main() 
{ 
	int a, b, c, d;

	a = 10;
	b = a;
	c = a + b;
	
	d = 10;
	d = d + 10;/*  equivalent to  d += 10;  */

	printf( "\n a = %d, b = %d", a, b );
	printf( "\n c = %d, d = %d", c, d );
	
	return 0;
}