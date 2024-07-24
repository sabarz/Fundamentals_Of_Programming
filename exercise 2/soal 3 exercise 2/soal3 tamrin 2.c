#include <stdio.h>

int main()
{
	long long int n , add = 0 , b ;
	scanf("%lld" , &n) ;
	
	b = n ;
	
	while(b > 0)
	{
		add = add * 10 + b % 10 ;
		b /= 10 ;
	}

	if(add != n)
	printf("NO") ;

	else 
	printf("YES") ;

	return (0);
}
