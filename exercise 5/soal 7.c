#include <stdio.h>

int main()
{
	FILE *file  , *output;
	int i , n ;
	char s[100] ;

	scanf("%d" , &n) ;
	file = fopen("input.txt" , "r");
	output = fopen(" out.txt "  , "w") ;

	for(i = 0 ; i < n ; i ++)
	{
		fprintf(output , "%s" , "\n") ;

		while(fscanf(file,"%c" , &s[i]) != '\n') 
		{

		fprintf(output , "%s" , " ") ;	

		switch (s[i])
		{
			case 'a' :
		fprintf(output , "%s" , ".-") ;
			break;
		
			case 'b' :
		fprintf(output , "%s" , "-...") ;
			break;

			case 'c' :
		fprintf(output , "%s" , "-.-." ) ;
			break;

			case 'd' :
		fprintf(output , "%s" , "-..");
			break;

			case 'e' :
		fprintf(output , "%s" , ".");
			break;

			case 'f' :
		fprintf(output , "%s" , "..-.");
			break;

			case 'g' :
		fprintf(output , "%s" ,"--." );
			break;

			case 'h' :
		fprintf(output , "%s" ,"...." );
			break;

			case 'i' :
		fprintf(output , "%s" ,".." );
			break;

			case 'j' :
		fprintf(output , "%s" ,".---" );
			break;

			case 'k' :
		fprintf(output , "%s" ,".-" );
			break;

			case 'l' :
		fprintf(output , "%s" , ".-..");
			break;

			case 'm' :
		fprintf(output , "%s" , "--" );
			break;
			case 'n' :
		fprintf(output , "%s" ,"-." );
			break;

			case 'o' :
		fprintf(output , "%s" , "---");
			break;

			case 'p':
		fprintf(output , "%s" , ".--." );
			break;

			case 'q':
		fprintf(output , "%s" , "--.-" );
			break;

			case 'r':
		fprintf(output , "%s" , ".-." );
			break;

			case 's':
		fprintf(output , "%s" , "..." );
			break;

			case 't':
		fprintf(output , "%s" , "-" );
			break;

			case 'u':
		fprintf(output , "%s" , "..-" );
			break;

			case 'v':
		fprintf(output , "%s" , "...-" );
			break;

			case 'w':
		fprintf(output , "%s" , ".--" );
			break;

			case 'x':
		fprintf(output , "%s" , "-..-" );
			break;

			case 'y':
		fprintf(output , "%s" , "-.--" );
			break;

			case 'z':
		fprintf(output , "%s" , "--.." );
			break;

			case 1:
		fprintf(output , "%s" , ".----" );
			break;

			case 2:
		fprintf(output , "%s" , "..---" );
			break ;

			case 3:
		fprintf(output , "%s" , "...--" );
			break;

			case 4:
		fprintf(output , "%s" , "....-" );
			break;

			case 5:
		fprintf(output , "%s" , "....." );
			break;

			case 6:
		fprintf(output , "%s" , "-...." );
			break;

			case 7:
		fprintf(output , "%s" , "--..." );
			break;

			case 8:
		fprintf(output , "%s" , "---.." );
			break;

			case 9:
		fprintf(output , "%s" , "----." );
			break;

			case 0:
		fprintf(output , "%s" , "-----" );
			break;
			
			case ':':
		fprintf(output , "%s" , "-..--" );
			break;

			case '.':
		fprintf(output , "%s" , ".-.-.-" );
			break;

			case '?':
		fprintf(output , "%s" , "..--.." );
			break;

			case '/':
		fprintf(output , "%s" , "-..-." );
			break;

			case '-':
		fprintf(output , "%s" , "-....-" );
			break;

			case '(':
		fprintf(output , "%s" , "-.--." );
			break;

			case ')':
		fprintf(output , "%s" , "-.--.-" );
			break;

			default
		fprintf(output , "%s" , "/") ;
	}


	
	return (0);
}
