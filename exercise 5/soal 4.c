#include <stdio.h>
#include<ctype.h>
#include<string.h>

struct name
{
	char s[500];
}dc[150];


int countthevowel(char b[]) ;
int countthechar(char b[]) ;

int main()
{
	int n , m , counter = 0 , ans[105] , r = 0 , l[105];
	char amal[105][10] ;
	char v[105][105][150] ;

	scanf("%d" , &n);

	for(int i = 1 ; i <= n ; i ++)
	{
		scanf("%s" , dc[i].s) ;
	}
	
	scanf("%d" , &m) ;
	
	for(int i = 1 ; i <= m ; i ++)
	{
		scanf("%d" , &l[i]) ;
		
		if(l[i] == 2)
		scanf("%s" , amal[i]) ;
	}

	for(int i = 1 ; i <= m ; i ++)
	{
		if(l[i] == 2)
		{
			if(amal[i][0] == 'L')
			{
				for(int j = 1 ; j <= n ; j ++)
				{
					for(int t = j+1 ; t <= n ; t++)
					{
						if (strcmp(dc[j].s, dc[t].s) > 0)
						{
							char temp[500] ;
							int hold ;
            				strcpy(temp , dc[j].s);
            				strcpy(dc[j].s , dc[t].s);
							strcpy(dc[t].s , temp);
						}
					}
				}
			}    

			else if(amal[i][0] == 'V')
			{
				for(int j = 1 ; j <= n ; j ++)
				ans[j] = countthevowel(dc[j].s) ;

				for(int j = 1 ; j <= n ; j ++)
				{
					for(int t = j+1 ; t <= n ; t++)
					{
						if(ans[j] < ans[t])
						{
							char temp[500] ;
							int hold ;
            				strcpy(temp , dc[j].s);
							strcpy(dc[j].s , dc[t].s);
							strcpy(dc[t].s , temp);
						}
					}
				}
			}

			else 
			{
				for(int j = 1 ; j <= n ; j++)
				ans[j] = countthechar(dc[j].s) ;
				
				for(int j = 1 ; j <= n ; j ++)
				{
					for(int t = j+1 ; t <= n ; t++)
					{
						if(ans[j] < ans[t])
						{
							char temp[500] ;
							int hold ;
            				strcpy(temp , dc[j].s);
							strcpy(dc[j].s , dc[t].s);
							strcpy(dc[t].s , temp);
						}
					}
				}
			}
		}

		else
		{
			int P = 1 ;
			for(int t = 0 ; t < n ; t++,P++)
			{
				strcpy(v[r][t] , dc[P].s) ;
			}
			r++ ;		 
		}	
	}

	for(int j = 0 ; j < r ; j ++)
	{
		for(int i = 1 ; i <= n ; i++)
		{
			printf("%s\t" , v[j][i]);
		}
		
		printf("\n") ;
	}
	
	return (0);
}

int countthevowel(char b[])
{
	int ans = 0 ;

	for(int i = 0 ; i < sizeof(b) ; i++)
	{
		if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'u' || b[i] == 'o')
		{
			ans ++ ;
		}
	}

	return ans ;
}
int countthechar(char b[])
{
	int l[28] ;
	char c[] = {"qwertyuiopasdfghjklzxcvbnm"};
	int ans = 0;

	for(int i = 0 ; i < sizeof(b) ; i ++)
	{
		for(int j = 0 ; j < 26 ; j ++)
		{
			if(c[j] == b[i])
			{
				l[j] = 1 ;
			}
		}
	}

	for (int i = 0 ; i < 26 ; i ++ )
	ans += l[i] ;

	return ans ; 
		
}


