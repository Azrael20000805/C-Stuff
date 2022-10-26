#include <stdio.h>

int main()
{
	//1.Display your name and the name of your school in two seperate lines.
	printf("Eka umbata wadak na ne\nEkath wadak na ne\n");
	
	//2.Display the following output using printf statements
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("******\n");
	
	//3.Input values for int, float, double and char data types and dispay the value of each of the variable.
	int x;
	float y;
	double z;
	char a;
	
	x = 1;
	y = 1.253;
	z = 3.14159;
	a = 'Z';
	
	printf("%d\n%f\n%lf\n%c\n",x,y,z,a);
	
	//4.Input 2 integers and display the total.
	int A,B,total;
	printf("Enter a value for A:\n");
	scanf("%d",&A);
	printf("Enter a value foe B:\n");
	scanf("%d",&B);
	
	total = A + B;
	
	printf("The total is %d\n",total);
	
	//5.Input two numbers with decimals and display the avergae with decimals.
	float C,D,sum,avg;
	printf("Enter a value for C:\n");
	scanf("%f",&C);
	printf("Enter a value for D:\n");
	scanf("%f",&D);
	
	sum = C + D;
	avg = sum/2.0;
	
	printf("The average is %f\n",avg);
	
	//6.Input a student name, birth year and display the student name with age.
	char name[30];
	int birth,age;
	
	printf("Please enter student name:\n");
	scanf("%s",&name);
	printf("Please enter birth year:\n");
	scanf("%d",&birth);
	
	age = 2022 - birth;
	
	printf("The student's name is %s and the age is %d\n",name,age);
	
	//7.Input 2 numbers, swap the values and display the output.(Before swap and after swap)
	int E,F;
	printf("Enter a value for E:\n");
	scanf("%d",&E);
	printf("Enter a value for F:\n");
	scanf("%d",&F);
	
	printf("The value of E is %d and the value of F is %d\n",F,E);
	
	//8.Execute the following code and analyze the output.
	
	printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %i\n", 1234);
	printf("Float number: %3.2f\n", 3.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("Unsigned value: %u\n", 150);
	printf("Just print the percentage sign %%\n", 10);
	
	
	return 0;
	
}

	

