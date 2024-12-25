#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any Three values :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b && a>=c)
	{
		printf("%d is Greater then %d and %d",a,b,c);
	} 
	else if(b>=a && b>=c)
	{
		printf("%d is Greater then %d and %d",b,c,a);
	}
	else if(c>=a && c>=b)
	{
		printf("%d is Greater then %d and %d",c,a,b);
	}
	return 0;
}
