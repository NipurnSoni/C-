#include<iostream>
int main()
{
    int a, b,d;
    char c;
    printf("Enter the operator");
    scanf ("%c", &c);
	printf("Enter first no.");
    scanf ("%d", &a);
	printf("Enter second no.");
    scanf ("%d", &b);  
  
    switch(c)
	{
		case '+' :
			d=a+b;
		printf("Addition is %d",d);
		break;
		case '-' :
		printf("Subtraction is %d", a-b);
		break;
		case '*' :
		printf("Multiplication is %d",a*b);
		break;
		case '/' :
		printf("Divison is %d", a/b);
		break;
		default : 
		printf("Enterr either +,-,*,/");
		break;
		
	} 
    return 0;
}
