#include <stdio.h>

int main()
{
	int n , x = 4 , counter = 2  , p  ,add ;

	scanf("%d" , &n) ;

	if(n == 1 || n == 2 )
	printf("1") ;
	
	if (n == 2)
	printf("3") ;
	
	do
	{
		for(int i = 2 ; i <= x/2 ; i ++)
		{
			p = 0 ;

			if(x % i == 0)
			{
				p = 1 ;
				break ;
			}
		}

		if(p == 0)
		{
			int hold = x ;
			add = 0 ;
			while(hold > 0)
			{
				add = add * 10 + hold % 10 ;
				hold /= 10 ;
			}

			if(add == x)
			counter ++ ;
			
		}

		x++ ;
		 

	}while(counter < n);

	printf("%d" , x - 1) ;

	return (0);
}