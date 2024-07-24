#include <stdio.h>

int main()
{
	int n , a[100] , cid[100] ,id[100] , i , j ;

	scanf("%d" , &n) ;

	for(int i = 1 ; i <= n ; i ++)
	scanf("%d" , &a[i]) ;
	

	for(i = 1 ; i <= n ; i ++)
	{
		scanf("%d" , &id[i]) ;
		int hold = 0 ;
	
		for (j = 1 ; j <= n ; j++)
		{
			if(a[i] < a[j] )
			hold ++;
		}
		
		cid[hold] = id[i] ;
	}

	for(j = 0 ; j < n ; j++)
	{
		printf("%d\t" , cid[j]) ;	
	}

	return (0);
}