#include<stdio.h>
 
int main()
{
	char a[100][100] ;
    int n , m ;
    scanf("%d%d" ,& n , &m ); 

    for (int i = 1 ; i <= 3*n ; i++)
    {
        for(int j = 1 ; j <= 3*m ; j++)
        {
           if(i <= n && j <= m)
           a[i][j] = 'X' ;
           
        	else if(i > 2*n && j <= m )
           a[i][j] = 'X' ;
           
        	else if(i <= n && j > 2*m)
           a[i][j] = 'X' ;
           
			else if(i > 2*n && j > 2*m)
		   a[i][j] = 'X' ;
       		
       		else if(i > n && i <= 2*n)
       		{
       			if(j > m && j <= 2*m)
       				a[i][j] = 'X' ;
       			else
				   a[i][j] = '.';	
			}
       		else
       		a[i][j] = '.' ;
	    
		printf("%c" , a[i][j]) ;
		}
        printf("\n") ;
    }
    




    return 0 ;
}