#include<stdio.h>
int main()
{
	int a;
	printf("Enter any No. :");
	scanf("%d", &a);
	
	if(a%2!=0)
	{
	   printf("%d is a Prime No.",a);	
	}
	else 
	{
		printf("This is not a Prime No.");
	}
	return 0;
}
