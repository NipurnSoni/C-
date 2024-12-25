#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Choose the number to perform the operation \n");
	printf(" 1. For Additon \n");
	printf(" 2. For Subtraction \n");
	printf(" 3. For Multiplication \n");
	printf(" 4. For Division \n");
	scanf("%d", &d);
	printf("Enter the First No.");
	scanf("%d",&a);
	printf("Enter the Second No.");
	scanf("%d", &b);
	
	switch(d)
	{
	   case 1: 
	   c=a+b;
	   printf("Addition is %d",c);
	   break;
	   case 2: 
	   c=a-b;
	   printf("Substraction is %d",c);
	   break;
	   case 3: 
	   c=a*b;
	   printf("Multiplication is %d",c);
	   break; 
	   case 4: 
	   c=a/b;
	   printf("Division is %d",c);
	   break; 	
	   default:
	   printf("Please enter values between 1 to 4");
	   break;
	}
	return 0;
}
