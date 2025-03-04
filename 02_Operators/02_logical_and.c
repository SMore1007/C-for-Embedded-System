// Logical AND ( && ) operator

#include <stdio.h>
#include <stdlib.h>
int main( )
{
	int a;
	a = (2<1) && (4<3);
	printf ( "\n (2<1) && (4<3) = %d", a ) ;
	a = (2<1) && (4>3);
	printf ( "\n (2<1) && (4>3) = %d", a ) ;

	a = (2>1) && (4<3);
	printf ( "\n (2>1) && (4<3) = %d", a ) ;

	a = (2>1) && (4>3);
	printf ( "\n (2>1) && (4>3) = %d", a ) ;

	return 0;
}
