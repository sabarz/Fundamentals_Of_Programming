#include <stdio.h>

int main()
{
	int input , ans , nmd  ;

	scanf("%d" , &ans) ;

		
		while(ans >= 10)
			{
				nmd = ans ;
				ans = 0;
				
				while(nmd > 0)
				{
					int r = nmd % 10 ; 
					ans += (r) ;
					nmd = (nmd - (r)) / 10 ;
					
				}
			}
		
		printf("%d" , ans) ;
	
	return (0);
}
