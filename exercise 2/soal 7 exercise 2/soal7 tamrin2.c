#include<stdio.h>


int main()
{
	int n , k , ans = 0 , pointer = 1 ;
	
	scanf("%d%d" , &n , &k) ;
	
	do{
		pointer += k;
		
		if(pointer > n)
		pointer = pointer - n ;
		
		ans ++ ;
	
	}while(pointer != 1) ;
	
	printf("%d" , ans) ;
	
	return 0 ;
}