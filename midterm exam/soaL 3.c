#include <stdio.h>
// shomare daneshjooyi 99521316
int main()
{
	int n , a ,min1 , min2 ;
	scanf("%d" , &n ) ;


	printf("%d", secondMin(n)) ;

	return (0);
}

int secondMin (int n)
{
	int min1 ,a , min2 ;
	if(n >= 1)
	scanf("%d" , &a) ;
	min1 = a ;
	min2 = a ;

	for(int i = 1 ; i < n ; i ++)
	{		
		if(n > 2)
		{
			if(a < min1)
			min1 = a ;

			if((a < min2) && (a > min1))
			min2 = a ;

		}
		
		else 
		min2 = 0;
		
	scanf("%d" , &a) ;
	}

	return min2 ; 
}
