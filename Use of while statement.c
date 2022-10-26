#include <stdio.h>

int main()
{
	int mod1,mod2,mod3,mod4,sum,count;
	float avg;
	char stdID[11];
	count = 1;
	
	printf("Please enter Student ID:\n",stdID);
	scanf("%s",&stdID);
	printf("Please enter marks for module 1:\n");
	scanf("%d",&mod1);
	printf("Please enter marks for module 2:\n");
	scanf("%d",&mod2);
	printf("Please enter marks for module 3:\n");
	scanf("%d",&mod3);
	printf("Please enter marks for module 4:\n");
	scanf("%d",&mod4);
	printf("\n");
	
	printf("Student ID: %s\n",stdID);
	printf("Marks for module 1: %d\n",mod1);
	printf("Marks for module 2: %d\n",mod2);
	printf("Marks for module 3: %d\n",mod3); 
	printf("Marks for module 4: %d\n",mod4);
	
	sum = mod1 + mod2 + mod3 + mod4;
	avg = sum / 4.0;
	
	printf("The total = %d\n",sum);
	printf("The average = %.2f\n",avg);
	
	while(count <= 2)
	{
		printf("\n");
		printf("Please enter Student ID:\n",stdID);
		scanf("%s",&stdID);
		printf("Please enter marks for module 1:\n");
		scanf("%d",&mod1);
		printf("Please enter marks for module 2:\n");
		scanf("%d",&mod2);
		printf("Please enter marks for module 3:\n");
		scanf("%d",&mod3);
		printf("Please enter marks for module 4:\n");
		scanf("%d",&mod4);
	    printf("\n");
	    
	 	printf("Student ID: %s\n",stdID);
		printf("Marks for module 1: %d\n",mod1);
		printf("Marks for module 2: %d\n",mod2);
		printf("Marks for module 3: %d\n",mod3); 
		printf("Marks for module 4: %d\n",mod4);
	
		sum = mod1 + mod2 + mod3 + mod4;
		avg = sum / 4.0;
	
		printf("The total = %d\n",sum);
		printf("The average = %.2f\n",avg);
	
	++count;
	
	
	}
		
	return 0;
}
