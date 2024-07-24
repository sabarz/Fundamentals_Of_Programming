#include <stdio.h>

int main()
{
	int n , a[1000] , i = 1 , j = 1 ,counter = 0 ;
	
	for(i = 1 ; i <= n ; i ++)
	a[i] = 0 ;
	
	scanf("%d" , &n) ;

	while(counter < n - 1)
	{	
		i = j ;	
		while (a[i] == 1)
		{
		i++ ;
		if(i > n)
		i -= n ;
		}

		j = i+1; 
		
		if(j > n)
		j -= n ;
		
		while(a[j] == 1)
		{	
		j++ ;
		if(j > n)
		j -= n ;
		}
		
		a[j] = 1 ;
		counter ++ ;		
	}

	for(i = 1 ; i <= n ; i ++)
	{
		if(a[i] != 1)
		printf("%d\n" , i) ;
	}
	return (0);
}
