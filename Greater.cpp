#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two value");
	scanf("%d %d", &a,&b);
	if(a>b)
	{
		printf("%d is greater then %d", a,b);
	}
	else if(b>a)
	{
		printf("%d is greater then %d", b,a);
	}
	return 0;
}
