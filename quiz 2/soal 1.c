#include <stdio.h>

int main()
{
	int ans = 1 , n ;
	scanf("%d" , &n) ;


	for(int i = 4 ; i <= n ; i ++)
	{
		int p = 0 ; 
		
		for(int j = 2 ; j <= i/2 ; j ++)
		{
			if (i % j == 0)
			{
				p = 1 ;
			}
	
		}
		if(p == 1)
		ans *= i ;
	}

	if(n >= 0)
	printf("%d" , ans) ;

	else
	{
		ans *= -1 ;
	printf("%d" , ans ) ;
	}
	
	return (0);
}