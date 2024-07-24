#include<stdio.h>

int main()
{
	int  j , n , l , d[1000] , g[1000] , r[1000] , x = 0 , time = 0 ;
	
	scanf("%d%d" , &n , &l) ;
	
	d[0] = 0 ;

	for(j = 1 ; j <= n ; j ++)
	{
		scanf("%d%d%d" , &d[j] , &r[j] , &g[j]) ;

		time += (d[j] - d[j-1]) ;
		x = time ;
		
		while(x >= (r[j] + g[j]))
		x = x - (r[j] + g[j]) ;
		
		if(x < r[j])
		time += (r[j] - x) ;
			
	} 
	
	time += (l - d[n]);
	
	printf("%d" , time) ;
	
	return 0 ;
}