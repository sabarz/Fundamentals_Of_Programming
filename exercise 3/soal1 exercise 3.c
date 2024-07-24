#include <stdio.h>

void one (int m)
{
	int c = 0 ;
	int nmd = 1 ;

	for(int i = 1 ; i <= 2*m*m+2*m+1 ; i ++)
	printf("-") ;

for(int s = 1 ; s <= m ; s++)
{
	printf("\n") ;

	for(int i = 1 ; i <= m ; i ++)
	{
		printf("| ") ;

		for(int j = m ; j > nmd ; j --)
		printf(" ") ;
		
		for(int t = 1 ; t <= nmd ; t++)
		printf("# ") ;
		
		for(int j = m ; j > nmd ; j --)
		printf(" ") ;

		if(i == m)
		printf("|") ;
	}
	
	if(s > m/2 )
	nmd -= 2 ;
	
	else
	nmd += 2 ;
	
	printf("\n") ;
}
}

int main()
{
	int n  ;

	scanf("%d" , &n) ;

	for(int i = 1 ; i <= n ; i ++)
	{
		one(n) ;		
	}

	for(int i = 1 ; i <= 2*n*n+2*n+1 ; i++)
	printf("-") ;

	return (0);
}