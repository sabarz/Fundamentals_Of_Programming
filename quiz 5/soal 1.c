#include <stdio.h>

void nmd (int a[][] , int n) ;

int main()
{
	int n , a[100][100] ;

	scanf("%d" , &n);

	for(int i = 1 ; i <= n ; i ++)
	{
		for(int j = 1 ; j <= n ; j ++)
		scanf("%d" , &a[i][j]) ;
	}

	nmd(a , n) ;
	return (0);
}

void nmd (int b[][] , int m)
{
	int row[100] = {0} , col[100] = {0} , ghotrf = 0 , ghotra=0 ;
	
	for(int i = 1 ; i <= m ; i ++)
	{
		counter = 0 ;

		for(int j = 1 ; j <= m ; j ++)
		{
			row[i] += b[i][j] ;
			col[j] += b[i][j] ;

			if(i == j)
			ghotra +=b[i][j] ;

			else if(j == i+n-1 || j == i+n-3 ||i == j+n-1 || i == j+n-3)
			ghotrf +=b[i][j] ;
		}
	}

int counter = 0 ;
	
		for(int i = 1 ; i <= n ; i ++)
		{
			if(col[i] != col[i+1] ||row[i] != row[i+1])
			{
				counter = 1 ;
				break;
			}
		}

		if(counter == 1)
		printf("Fail") ;

		else
		{
			if(col[1] == row[1] && row[1] == ghotrf && ghotrf = ghotra)
			printf("Fail") ;
		}
		
	
}