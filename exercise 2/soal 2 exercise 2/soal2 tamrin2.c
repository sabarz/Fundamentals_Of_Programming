#include<stdio.h>

int main()
{
	int n ;
	scanf("%d" , & n) ;

	if(n > 2)
	printf("2\n");

	if(n > 3)
	printf("3\n") ;


	for(int i = 4 ; i < n ; i ++)
	{
		int p = 0 ; 
		
		for(int j = 2 ; j <= i/2 ; j ++)
		{
			if (i % j == 0)
			{
				p = 1 ;
				break ;
			}
	
		}
		if(p == 0)
		printf("%d\n" , i) ;
	}

	return 0 ;

}