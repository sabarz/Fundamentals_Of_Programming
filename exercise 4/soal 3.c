#include <stdio.h>

int main()
{
	int a , b , c , mat[100][100] , jat[100][100] , ans , i , j , t ;

	scanf("%d%d%d" ,&a , &b , &c) ;

	for(i = 1 ; i <= a ; i ++)
	{
		for(j = 1 ; j <= b ; j ++)
		scanf("%d" , &mat[i][j]) ; 
	}

	for(i = 1 ; i <= b ; i ++)
	{
		for(j = 1 ; j <= c ; j ++)
		scanf("%d", &jat[i][j]) ;
	}

	for(j = 1 ; j <= a ; j ++)
	{
		for(t = 1 ; t <= c ; t++)
		{
			ans = 0 ;
			for(i = 1 ; i <= b ; i ++)
			{
				ans += mat[j][i] * jat[i][t] ;
			}

			printf("%d\t" , ans) ;
		}
		printf("\n") ;
	}

	return (0);
}