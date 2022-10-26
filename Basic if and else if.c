#include <stdio.h>

int main()
{
	int mark;
	
	printf("Enter marks:");
	scanf("%d",&mark);
	
	if(mark >= 80)
		printf("%s", "Grade A");
	else if(mark >= 50)
		printf("%s", "Grade B");
	else if(mark >= 40)
		printf("%s", "Grade C");
	else
		printf("%s", "Grade F");
		
	return 0;

}
