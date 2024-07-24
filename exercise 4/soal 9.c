#include <stdio.h>
#include<stdbool.h>

int hast(int a , int b , int a1 , int b1) ;

int main()
{
	int i , j ,add[101][101] ,n ,ans = 0 , nmd[105] , hold1 , hold2;
	bool a[105] ;
	 
	 scanf("%d" , &n) ;

	for(i = 1 ; i <= n ; i ++)
	{
		for(j = 1 ; j <= 2 ; j++)
		scanf("%d" , &add[i][j]) ;

		a[i] = false ; 
	}

	for(i = 1 ; i <= n ; i ++)
	{
		if(a[i] == false)
		{	
			hold1 = add[i][1] ;
			hold2 = add[i][2] ;

			ans ++ ;
			a[i] = true ;

			for(j = i+1 ; j <= n ; j ++)
			{
				if( hast(add[j][1] , add[j][2] , hold1 , hold2) == 10 && a[j] == false)
				{
					a[j] = true ;

					if(add[j][1] > hold1)
					hold1 = add[j][1] ;

					if(add[j][2] < hold2)
					hold2 = add[j][2] ;
				}
			}
			
			nmd[ans] = hold1 ;
		}	
		
		else
		continue ;	
	}
	
	printf("%d\n" , ans) ;

	for(i = 1 ; i <= ans ; i ++)
	printf("%d\t" , nmd[i]) ;
	
	return (0);
}

int hast (int a , int b , int a1 , int b1)
{
	if(a == a1 || b == b1 || a == b1 || b == a1)
	return 10 ;

	else if(a < a1 && b > a1)
	return 10 ;

	else if (a > a1 && b > b1)
	return 10 ;

	else 
	return 9 ;
}