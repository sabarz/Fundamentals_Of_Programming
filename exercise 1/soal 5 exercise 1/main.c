#include<stdio.h>
#include <stdlib.h>

int main() 
{
   char lnt, lnt2 ;
   
   scanf("%*d%c%*d%c%*d" , &lnt , &lnt2) ;

   printf("%c\t%c" , lnt , lnt2) ;

   return 0;
}