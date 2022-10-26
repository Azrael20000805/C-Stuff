#include <stdio.h>

int main()
{
	char shape;
	float width, length, base, radius, area;
	
	printf("Enter the first character of the shape (R,T,C):\n");
	scanf("%c",&shape);
	
	if(shape == 'R' || shape == 'r')
	{
		printf("You have chosen rectangle\n");
	}
	else if(shape == 'T' || shape == 't')
	{
		printf("You have chosen triangle\n");
	}
	else if(shape == 'C' || shape == 'c')
	{
		printf("You have chosen circle\n");
	}
	else
	{
		printf("Please enter a valid character");
	}
	return 0;
}
