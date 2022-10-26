#include <stdio.h>

int main()
{
	int shape, width, length, height, base, radius;
	int area;
	printf("Enter R,T or C\n");
	shape = getchar();
	
	switch (shape)
	{
	
	case 'R': printf("Enter width: ");
			  scanf("%d",&width);
			  printf("Enter length: ");
			  scanf("%d",&length);
			  area = length * width;
			  printf("The area of the rectangle is %d",area);
			  break;
			
	case 'T': printf("Enter base: ");
			  scanf("%d",&base);
			  printf("Enter height: ");
			  scanf("%d",&height);
			  area = base * height/2;
			  printf("The area of the triangle is %d",area);
			  break;		  
	
	case 'C': printf("Enter radius: ");
			  scanf("%d",&radius);
			  area = 3.14*radius*radius;
			  printf("The area of a circle %d",area);
			  break;
			 
	default : printf("Enter a valid character");		  
   }
	return 0;		  
}
