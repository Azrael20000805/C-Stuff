#include <stdio.h>

int main()
{
	int mark;
	printf("Enter Marks:\n");
	scanf("%d",&mark);
	
	if(mark >= 45)
	{
		printf("You a smart motherfucker");
	}
	else
	{
		printf("You a dumbass");
	}
	
	return 0;
}
