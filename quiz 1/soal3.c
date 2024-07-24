#include <stdio.h>

int main()
{
	int x , m5 , m10 , m1 , m25 , r5 ,r10 , r25, r1 ;

	scanf("%d" , &x) ;
	
	x = 1000 - x ;

	r25 = x % 25 ;

	m25 = (x - r25)/ 25 ;

	r10 = r25 % 10 ;

	m10 = (r25 - r10) / 10 ;

	r5 = r10 % 5 ;

	m5 = (r10 - r5) / 5 ;

	m1 = r5 ;

	printf("%d*(25),%d*(10),%d*(5),%d*(1)" , m25 , m10 , m5 , m1) ;

	return (0);
}