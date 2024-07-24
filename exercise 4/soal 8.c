#include <stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
	int  ans = 0 ;
	char a[8][8] ;
	bool counter[8][8] ;

	for(int i = 0 ; i < 7 ; i ++)
	scanf("%s" , a[i]) ;
	
	
	for(int i = 0 ; i < 7 ; i ++)
	{
		for(int j = 0 ; j < 7 ; j ++)
		{
			if(a[i][j] == '.')
			{
				if(a[i-2][j] == 'o' && a[i-1][j] == 'o') 
				{
					ans++ ;
				}
			
				if( a[i][j-2] == 'o'  && a[i][j-1] == 'o')
				{
					ans++ ;
				}
				
				if( a[i+2][j] == 'o' && a[i+1][j] == 'o')
				{
					ans++ ;
				}
				
				if( a[i][j+2] == 'o'  && a[i][j+1] == 'o')
				{
					ans++ ;
				}
			}	
		}	
	}
	
	printf("%d" , ans);
	
	return (0);
}