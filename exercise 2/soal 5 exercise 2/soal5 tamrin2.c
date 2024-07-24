#include<stdio.h>
#include<math.h>


int main()
{
	int a , b , n , ans = 0, i = 0 , j = 0 , x; 
	
	scanf("%d%d%d" , &a , &b , &n ) ;
	
	int mabna[100000] ;
	
	while(n != 0)
	{
		ans += pow((float)a , i) * (n % 10) ;
		n /= 10 ;
		i++;
	}
	printf("%d\n", ans)	;

	while(ans != 0)
	{
		mabna[j] = ans % b ; 
		ans = ans / b ;
		j++ ;
		
		printf("%-1d" , mabna[j]);
	}
	




	return 0 ;
}
