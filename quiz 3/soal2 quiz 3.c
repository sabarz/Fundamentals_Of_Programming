#include <stdio.h>

int aval (int x) ;
void javab () ;

int main()
{
	int n ;
	scanf("%d" , &n) ;
	javab(n) ;

	return (0);
}

int aval (int x)
{
	int hold ;

	for(int i = x ; i >= 2 ; i--)
	{
		int p = 0 ;
		for(int j = 2 ; j <= i/2 ; j++)
		{
			if(i%j == 0)
			p = 1 ;
		}

		if(p == 0)
		{
			hold = i ;
			break ;	
		}
	}
	return hold ;
}
void javab (int t)
{
	if(aval(t) == t)
	printf("%d" , t) ;

	else
	{
		while(aval(t) > 1)
		{
			int nmd = aval(t) ;
			printf("%d \t" , nmd) ;
			t = t - aval(t) ;
		}

		if(t == 1)
		printf("1") ;
	}
	
	return ;
}