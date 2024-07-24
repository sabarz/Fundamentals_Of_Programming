#include <stdio.h>
#include<math.h>

void nmd(int x);

int main()
{
	int n ;
	scanf("%d" , &n) ;

	for(int i = 2 ; i <= n ; i ++)
	nmd(i) ;

	return (0);
}


void nmd (int x)
{
	int hold ;
	int t = x ;
	int i = 2 ;
while(pow(x%10 , i) <= x)
{
	int counter = x ;
	while(counter > 0)
	{
		hold = counter % 10 ;
		counter = (counter - counter%10) / 10 ;
		t -= pow(hold , i) ;
	}

	if(t == 0)
	{
		printf("k = %d \t" , i) ;
		printf("%d\n" , x) ;
	}

	i++;
}

	return ;
}
