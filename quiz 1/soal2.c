#include <stdio.h>

int main()
{
	int x , y ;

	scanf("%d%d" , &x , &y) ;
	x+= y-x;
	
	printf("%d\n" , x) ;
	
	x -= y-x ;
	y = x ;

	printf("%d" , y) ;

	return (0);
}