#include <stdio.h>
#include<string.h>


int main()
{
	char s1[100] , s2[100] , s3[100] ;

	scanf("%s%s%s" , s1 , s2 , s3) ;

	char *token ;
	char ans[100] ;
	
	char *hold = strstr(s1 , s2) ;
	
	int size = strlen(hold) ;
	int size1 = strlen(s1) ;
	int size2 = strlen(s2) ;

	strncpy(ans , s1 , size1 - size);
	strcpy(ans , s3) ;
	char *token = strtok(hold , s2[size2-1]) ;
	strcpy(ans , *token);	

	return (0);
}