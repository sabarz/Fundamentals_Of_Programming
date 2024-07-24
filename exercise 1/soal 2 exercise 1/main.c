#include <stdio.h>

int main()
{
	int d ;

	scanf("%d" , &d) ;

	if(d < 0)
	printf("Ice") ;

	else if(d <= 100)
	printf("Water") ;

	else if(d > 100)
	printf("Steam") ;

	return (0);
}
