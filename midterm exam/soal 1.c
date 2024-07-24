#include<stdio.h>


int ans = 0 ;
int sum () ;

int main()
{
    int nmd = sum() ;
   printf("%d" , nmd) ;

    return 0  ; 
}

int sum ()
{
    int n;
    scanf("%d" , &n) ;
    
    if(n == 13)
    return ans ;

    else 
    {
        ans += n ;
        sum() ;
    }
}
