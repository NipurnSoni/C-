#include<stdio.h>
int main()
{
	int a;
    printf("Enter Any Number:");
	scanf("%d", &a);
	 
	switch(a)
	{
		case 0:
			printf("ZERO");
		break;
		case 1:
			printf("ONE");
		break;
		case 2:
			printf("TWO");
		break;
		case 3:
			printf("THREE");
		break;
		case 4:
			printf("FOUR");
		break;
		case 5:
			printf("FIVE");
		break;
		case 6:
			printf("SIX");
		break;
		case 7:
			printf("SEVEN");
		break;
		case 8:
			printf("EIGHT");
		break;
		case 9:
			printf("NINE");
		break;
		case 10:
			printf("TEN");
		break;
		default:
			printf("INPUT NO. FROM 1 TO 10");
		break;	
	}
	return 0;
}
