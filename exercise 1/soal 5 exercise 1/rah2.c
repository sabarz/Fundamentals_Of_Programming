#include <stdio.h>

int main()
{
	char a , b;

	scanf("%*[0-9] %[A-Za-z] %*[0-9] %[A-Za-z] %*[0-9]" , &a , &b) ;

	printf("%c\t%c", a, b) ;

	return (0);
}