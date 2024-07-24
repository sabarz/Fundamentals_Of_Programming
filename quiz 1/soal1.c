#include <stdio.h>

int main()
{
	int a , b , z , t , x , y, ans1 , ans2 ;
	scanf ("%d%d%d%d%d%d" , &x , &y , &z , &t , &a , &b) ;

	if(x == z)
	ans1 = a ;

	else if(x == a)
	ans1 = z ;

	else if (z == a)
	ans1 = x ;
//ta inja tool ras

	if(y == t)
	ans2 = b ;

	else if(y == b)
	ans2 = t ;

	else if(t == b)
	ans2 = y ;

	printf("%d\t%d" , ans1 , ans2);
	


	return (0);
}