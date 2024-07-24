#include<stdio.h>


int main()
{
	int n , i = 1 , j = 0 , ans = 100 ;
	
	scanf("%d" , &n) ;
	
	while(ans > 0)
	{
		j += i ;
		i++ ;
		
		if(j >= n)
		break ;	
		
	}
		
	printf("%d" , j) ;
	
	return 0 ;
}
