#include<stdio.h>

int main()
{
	int one = 0 , two = 0 , three = 0, n ,x , four = 0 ;

	scanf("%d" , &n) ;

	for(int i = 1 ; i <= n ; i ++)
	{
		scanf("%d" , &x) ;

		switch (x)
		{
		case 1 :
		one ++ ;
		break;
		
		case 2 :
		two++ ;
		break ;

		case 3 :
		three ++;
		break;

		case 4 :
		four++ ;
		break ;

		}
	}

	int ans  = four ;
	
	if(three > one)
	{
		ans += one ;
		three -= one ;
		ans += three ;
	}
	else
	{
		ans += three ;
		one -= three ;
	}

	if(two % 2 == 0)
	{
		ans += (two/2) ;
		two = 0 ;
	}
	else
	{
		ans += (two-1) / 2 ;
		two = 1 ;
	}

	if(one != 0 && two != 0)
	{
		if(one >= 2 && one < 4)
		{
			ans += 1 ;
		}

		else if (one >= 4)
		{
			ans += (one - (one%4)) / 4 ;
			one %= 4 ;
			ans += one ;
		}
		
		else if (one == 1)
		ans += 1 ;
		
		
	}

	else if (one == 0 && two != 0)	
	ans += two ;
	
	else if(one != 0 && two == 0)
	ans += one ;

	printf("%d" , ans) ;

	return 0 ;
}