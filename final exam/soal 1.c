#include <stdio.h>

int sort(int a[] , int SIZE)
{	
	int *aptr = &a ;

	for(int i = 1 ; i < SIZE ; i ++)
	{
		for(int j = 0 ; j < SIZE-1 ;j++, aptr++)
		{
			if(*(aptr+j) < *(aptr+j+1))
			{
				int hold = *(aptr+j+1) ;
				*(aptr+j+1) = *(aptr+j) ;
				*(aptr+j) = hold ; 
			}
		}
	}
	
	aptr = &a ;

	for (int i = 0 ; i < SIZE ; i++)
	{
		printf("%d" , *(aptr+i)) ;
	}
	

	return (0);
}