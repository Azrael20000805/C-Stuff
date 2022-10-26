#include <stdio.h>

int main()
{
	int x,y,z;
	char op;
	printf("Please enter an operator:\n");
	printf("(Select +,-,*,/)\n");
	scanf("%c",&op);
		
	switch(op)
	{
		case '+': printf("You have chosen addition\n");
				  printf("Please enter number 1:\n");
				  scanf("%d",&x);
				  printf("Please enter number 2:\n");
				  scanf("%d",&y);	
				  
				  z = x + y;
		
				  printf("%d + %d = %d",x,y,z);
				  break;
				  
		case '-': printf("You have chosen subtraction\n");
		          printf("Please enter number 1:\n");
		          scanf("%d",&x);
		          printf("Please enter number 2:\n");
		          scanf("%d",&y);
		          
		          z = x - y;
		
				  printf("%d - %d = %d",x,y,z);
				  break;
				  
		case '/': printf("You have chosen divsion\n");
				  printf("Please enter number 1:\n");
				  scanf("%d",&x);
				  printf("Please enter number 2:\n");
				  scanf("%d",&y);
				  
				  z = (float)x / y;
		
				  printf("%d / %d = %d",x,y,z);
		          break;
				  
		case '*': printf("You have chosen multiplication\n");
				  printf("Please enter number 1:\n");
		    	  scanf("%d",&x);
				  printf("Please enter number 2:\n");
				  scanf("%d",&y);
				  
				  z = x * y;
		
				  printf("%d * %d = %d",x,y,z);	
				  break;
				  
		default	: printf("Please enter a valid operator");   			  	
	}
	
return 0;	
}
