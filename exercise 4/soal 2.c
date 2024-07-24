#include <stdio.h>

int main()
{
	int ans ,nmd = 0 , a[100], max = 0 ;
	
	for(int i = 1 ; i <= 50 ; i ++)
	scanf("%d" , &a[i]) ;

	for(int i = 1 ; i <= 50 ; i ++)
	{
		max = 0 ;

		for(int j = 2 ; j <= 50 ; j++)
		{
			if(a[i] == a[j])
			max++ ;
		}

		if(nmd < max)
		{
			nmd = max ;
			ans = a[i] ;
		}
	}

	printf("%d" , ans ) ;

	return (0);
}