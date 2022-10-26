#include<stdio.h>

int main()
{
	int i,j;
	
	for(i = 1; i <= 10 ; ++i)
		{
			for(j = 1; j <= i; ++j)
				{
					printf("*",j);
					 if(j == 5)
					 {
					 	continue;
					 	
					 	for(j = 6; j<= i; --j)
					 		{
					 			printf("*",j);
							 }
					 }
				}
			printf("\n");
		}
	return 0;	
}
