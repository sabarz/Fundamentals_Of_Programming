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
	int ans = x ;

for(int i = 1 ; i <= ans ; i ++)
{
	while(x > 0)
	{
		hold = x % 10 ;
		x = (x - x%10) / 10 ;
		t -= pow(hold , i) ;
	}

	if(t == 0)
	{
		printf("k = %d \t" , i) ;
		printf("%d\n" , ans) ;
	}

}
	
	return ;
}