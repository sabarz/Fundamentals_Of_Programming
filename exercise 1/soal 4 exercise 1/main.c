#include <stdio.h>

int main()
{
	int radif , sandali ;

	scanf("%d%d" , &radif , &sandali); 

	printf("%s\t", sandali > 10 ? "Left" : "Right") ;
	printf("%d\t" , 11 - radif) ;
	printf("%d" , sandali > 10 ? 21 - sandali : sandali) ;

	return (0);
}