#include <stdio.h>

int main()
{
	float weight , height , ans ;

	scanf("%f%f" , &weight , &height) ;

	ans = weight / (height * height) ;

	printf("%f\n" , ans) ;

	if(ans < 18.5)
	printf("underweight") ;

		else if(ans >= 18.5 && ans < 25)
			printf("normal") ;

			else if(ans >= 25 && ans < 30)
				printf("overweight") ;

				else if(ans >= 30)
					printf("obese") ;			

	return (0);
}