#include <stdio.h>

int fact(int);
int t(int,int) ;

int main()
{
	int n , x ;
	double ans = 1  ;
	int negative = -1 ;

	scanf("%d%d" , &n , &x) ;

	for(int i = 2 ; i <= n ; i+=2)
	{
		int tavan = t(x , i) ;
		ans += ((negative * tavan) / fact(i)) ;
		negative *= -1 ;
	}
	
	printf("%.3f" , ans) ;

	return (0);
}

int fact(int m)
{
	int nmd = 1 ;

	for(int i = 1 ; i <= m ; i ++)
	nmd *= i ;

	return nmd ;
}
int t(int m , int n )
{
	int tf = 1 ;

	for(int i = 1 ; i <= n ; i ++)
	tf *= m ;
	
	return tf;
}