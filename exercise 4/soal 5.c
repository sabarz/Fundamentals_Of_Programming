#include <stdio.h>

int main()
{
	int n , m ,ans = 0 ;
	char a[100] ;

	scanf("%d%d" , &n , &m) ;

	for(int i = 0 ; i < n ; i ++)
	{
		scanf("%s" , &a) ;

		for(int j = 0 ; j < m ; j ++)
		{ 
			if(a[j] == '*')
			ans ++ ;
		}
	}

	printf("%d" , ans) ;

	return (0);
}
