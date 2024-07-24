#include <stdio.h>

int main()
{
	int long  n , f[1000] , ans;

	scanf("%d" , &n) ;

	f[0] = 0 ;
	f[1] = 1 ;

	for(int i = 2 ; i <= n ; i ++)
		f[i] = (f[i-1]%10) + (f[i-2]%10) ;
	

	ans = f[n] % 10 ;

	printf("%d" , ans) ;

	return (0);
}