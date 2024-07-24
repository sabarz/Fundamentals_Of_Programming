#include<stdio.h>
#include<string.h>

int main()
{
	int n , i , j ,ans = 0, p = 0, counter = 0;
	char begin[105] ;
	char know[105][105] ;
	char end[105] ;
	
	scanf("%d" , &n) ;
	scanf("%s" , begin) ;

	for(int i = 0 ; i < n ; i ++)
	{
		scanf("%s" , know[i]) ; 
	}

	
	for(i = 0 ; i < n ; i++)
	{
		char *kptr = &know[i][0] ;
		char *bptr = &begin[0] ;
		counter = 0 ;
		int size = 0 ;
		
		for( ; *kptr != '\0' ; kptr++)
		{
			size++;
			for( ; *bptr != '\0' ; bptr++)
			{	
				if(*bptr == *kptr)
				{
					counter++ ;
					break ;
				}
			}	
		}
	
		if(counter == size)
		{
			ans ++ ;
			end[i] = 'Y' ;
		}
		
		else
		{
			end[i] = 'N' ;
			ans ++ ;
		}
	}
	
	for(i = 0 ; i < ans ; i ++)
	{
		if(end[i] == 'Y')
		printf("Yes\n") ;
		
		else
		printf("No\n") ;
	
	}
	

	return 0 ; 
}