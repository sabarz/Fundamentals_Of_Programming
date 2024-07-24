#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// shomare daneshjooyi 99521316
int main()
{
	int counter = 0 ,i;
	char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','O','p','q','r','s','t','u','v','y','x','z','w'};
	char ans[5] ;
	
srand(time(NULL));
	while(counter <= 4)
	{
		
		counter ++ ;
		int a = rand()%26;
		ans[counter] = c[a] ;

	for( i = 1 ; i < counter ; i ++)
		{
			if(ans[counter] == ans[i])
			counter -- ;	
		}

	}

	for(i = 1 ; i <= 4 ; i++)
	printf("%c" , ans[i]) ;

	
	return 0 ;
}
