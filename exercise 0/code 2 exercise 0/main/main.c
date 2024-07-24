#include <stdio.h>   

int main()
{
	int a[100] , i = 1 , x = 0 ;

   scanf("%d" , &a[0]) ;

    while(a[i-1] != 0)
    {
        scanf("%d" , &a[i]) ;
        i++ ;
        x++ ;
    }	
		
	x--;
	
    while(x >= 0)
    {
    	printf("%d\n" , a[x]) ;
    	x-- ;
	}
    
    return 0 ;	
}