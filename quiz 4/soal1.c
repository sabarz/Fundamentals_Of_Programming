#include <stdio.h>

void nmd (int ca[] , m) ;

int main()
{
	int n , a[1000] ;

	scanf("%d" , &n) ;

	for(int i = 1 ; i <= n ; i ++)
	scanf("%d" , &a[i]);

	nmd(a , n) ;

	return (0);
}
void nmd (int ca[] ,int m)
{
	int y ;

	for(int i = 1 ; i <= m ; i ++
	{
		for(int j = i+1 ; j <= m ; j ++)
		{
			y = ca[i] + ca[j] ;
			
			for(int t = 1 ; t <= m ; t ++)
			{
				if(y == ca[t]) 
				printf("%d%d" , ca[i] , ca[j]) ;
			}
		}
	}

	
	return ;
}