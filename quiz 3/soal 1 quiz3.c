#include <stdio.h>

void fi (int x) ;

int main()
{
	int n ;

	scanf("%d" , &n) ;
	fi(n) ;

	return (0);
}

void fi (int x)
{
	int ans = 0 ;

	for(int i = 1 ; i <= x ; i ++)
	{
		if(i*3 + i*4 + i*5 == x)
		ans = i ;

		if(i*3 >= 12)
		break ;
	}

	if(ans == 0)
	printf("Impossible");

	else
	printf("%d\t%d\t%d" , ans*3 , ans*4 , ans*5) ;

	return ;
}