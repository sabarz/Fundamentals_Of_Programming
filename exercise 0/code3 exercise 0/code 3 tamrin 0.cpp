#include<iostream>

using namespace std ;

const int N = 1000; 
int main()
{
	char a[N][N] ;
    int n , m ;
    cin >> n >> m ;

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
	    
	    cout << a[i][j] ;
		}
        cout << endl ;
    }
    




    return 0 ;
}
