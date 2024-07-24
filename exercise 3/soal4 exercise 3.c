#include <stdio.h>

void hanoi (char first , char help , char dest , int n)
{
	if(n == 1)
	{
		printf("%c -> %c\n" , first , help) ;
		printf("%c -> %c\n" , help , dest) ;
	}

	else
	{
		hanoi(first , help , dest , n-1) ;
		printf("%c -> %c\n" , first , help) ;
		hanoi(dest , help , first , n-1) ;
		printf("%c -> %c\n" , help , dest) ;
		hanoi(first , help , dest , n-1) ;
	}
	
}
int main()
{
	int n , m ;

	scanf("%d" , &n) ;

	hanoi('A','B','C', n) ;
	
	
	return (0);
}
