#include <stdio.h>

int main()
{
	int a , b , n , x = 0 , y = 0 , counter = 0 , nmd[100] , i ;

	scanf("%d" , &n);
	
	for(i = 0 ; i < n ; i ++)
	{
		scanf("%d%d" , &a , &b) ;
		
		counter = 0 ;
		x = 0 ;
		y = 0 ;
		
		if(a == 0 && b == 0)
		nmd[i] = 0 ;

		while(x != a || y != b)
		{
			counter++ ;
			if(counter % 2 != 0)
			{
				x++ ;
				y++ ;
			}

			else if(counter % 2 == 0 && (counter / 2) % 2 == 0)
			{
				x-- ;
				y++ ;
			}

			else if(counter % 2 == 0 && (counter/2) % 2 != 0)
			{
				x++ ;
				y-- ;
			}

			if(x > a && y > b)
			{
				nmd[i] = -1 ;
				break ;
			}

			else if(x == a && y == b)
			{
				nmd[i] = counter ;
				break ; 
			}
		}
	}

	for ( i = 0 ; i < n ; i++)
	printf("%d\n" , nmd[i]) ;

	return (0);
}