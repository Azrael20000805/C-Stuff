#include <stdio.h>

int main()
{
	char o;
	int x,y,z;
	printf("Please enter a valid operator:\n");
	printf("Select from (+,-,*,/)\n");
	scanf("%c",&o);
	
	if(o == '+')
	{
		printf("You have chosen addition\n");
		printf("Please enter number 1:\n");
		scanf("%d",&x);
		printf("Please enter number 2:\n");
		scanf("%d",&y);
		
		z = x + y;
		
		printf("%d + %d = %d",x,y,z);
	}
	
	else if(o == '-')
	{
		printf("You have chosen subtraction\n");
		printf("Please enter number 1:\n");
		scanf("%d",&x);
		printf("Please enter number 2:\n");
		scanf("%d",&y);
		
		z = x - y;
		
		printf("%d - %d = %d",x,y,z);
	}
	
	else if(o == '*')
	{
		printf("You have chosen multiplication\n");
		printf("Please enter number 1:\n");
		scanf("%d",&x);
		printf("Please enter number 2:\n");
		scanf("%d",&y);
		
		z = x * y;
		
		printf("%d * %d = %d",x,y,z);		
	}
	
	else if(o == '/')
	{
		printf("You have chosen division\n");
		printf("Please enter number 1:\n");
		scanf("%d",&x);
		printf("Please enter number 2:\n");
		scanf("%d",&y);
		
		z = (float)x / y;
		
		printf("%d / %d = %d",x,y,z);
	}
	
	else
	{
		printf("Please enter a valid operator");
	}
	
return 0;	 
}
