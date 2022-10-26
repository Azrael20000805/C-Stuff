#include <stdio.h>

int main()
{
	int A,B,C; //A,B and C are three angles in a triangle
	int sum;
	printf("A,B and C are 3 angles of a triangle\n");
	printf("Enter a value for angle 'A': ");//Prompts a statement stating Enter a value for angle 'A'
	scanf("%d",&A);// Enter a value for angle 'A'
		break;
	printf("Enter a value for angle 'B': ");//Prompts a statement stating Enter a value for angle 'B'
	scanf("%d",&B);//Enter a value for angle 'B'
	printf("Enter a value for angle 'C': ");//Prompts a statement stating Enter a value for angle 'C'
	scanf("%d",&C);//Enter a value for angle 'C'
	
	sum = (A + B + C);//calculates the summation of the 3 angles
	printf("The summation of A,B and C is %d\n",sum);// displays the summation of the 3 angles
	
	if(sum == 180)
	{
		printf("A triangle can be formed");
	}
	else
	{
		printf("A triangle can't be formed");
	}

	return 0;
}


