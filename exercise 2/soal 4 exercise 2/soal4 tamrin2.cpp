
	#include<stdio.h>

	
	int bmm(int x, int y)
	{
	 if(y == 0)
	  return x;
	 return bmm(y,x%y);
	}
	
	int main()
	{
	 int m , n , kmm;
	 
	 scanf("%d%d" , &m , &n);
	 
	 kmm = m*n / bmm(m,n);
	 
	 printf("%d\t%d", bmm(m,n) ,kmm);
	 
	 return 0;
	}
