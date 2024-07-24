#include <stdio.h>

int main()
{
	int n , ans[100]={0}, hold = 0 , counter = 1; 
	int s1[100] , s2[100] ;

	scanf("%d" , &n);
	
	for(int i = 1 ; i <= n ; i ++)
	scanf("%d" , &s1[i]) ;

	for(int i = 1 ; i <= n ; i ++)
	scanf("%d" , &s2[i]);

	for(int i = n ; i >= 1 ; i --)
	{
		int jam = s1[i] + s2[i] ; 
		
		ans[counter] = ((hold + jam ) % 10) ;
		
		counter++ ;
		
		if(jam + hold>= 10)
		hold +=   ;
		
		ans[counter] = hold ;
}

for(int j = counter ; j >= 1 ; j --)
printf("%d" , ans[j]) ;
	return (0);
}
