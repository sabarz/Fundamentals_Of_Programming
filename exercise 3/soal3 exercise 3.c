#include <stdio.h>

void chapgar(int x)
{
	if(x == 1)
	printf("1\t") ;

	else
	{	
		chapgar(x-1) ;
		printf("%d\t" , x) ;
	}

	return ;
}
int main()
{
	int n ;
	scanf("%d" , &n) ;

	chapgar(n) ;
	return (0);
}