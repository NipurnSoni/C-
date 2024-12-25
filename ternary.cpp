#include<stdio.h>
#include<conio.h>
int main()
{
	int x=1,y;
	y=(x==1 ? 2:0);
/*	if(x==1)  // code can be simplified using above code^
	{
		y=2;
	}
	else
	{
		y=0;
	}*/
	printf("x value is %d\n ",x);
	printf("y value is %d",y);	
}
