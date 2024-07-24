#include <stdio.h>

void star (int x , int y);

void star_one_line(int i) ;

int main()
{
	int n , i ;

	scanf("%d%d" , &i , &n ) ;

	star(i , n) ;

	return (0);
}
void star (int x , int y)
{
	for(int j = x ; j <= y ; j ++)
	{
		star_one_line(j) ;
		printf("\n") ;
	}
}
void star_one_line(int i)
{
    if(i==0){
        return;
    }
    else
    {
        printf("*");
        star_one_line(i-1);
    }    
       return ;
}