#include <stdio.h>

int main()
{
	int no1,no2;
	printf("Please enter a value for no1:\n");
	scanf("%d",&no1);
	printf("Please enter a value for no2:\n");
	scanf("%d",&no2);
	
	if(no1 == no2)
	printf("equal");
	
	if(no1 != no2)
	printf("not equal");
	
	return 0;
	
}
