#include<stdio.h>
int main
{
	char ch;
	printf("\n Enter any character :");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		printf("\n %c is Vowel",ch);
		break;	
	    case 'e':
		case 'E':
		printf("\n %c is Vowel",ch);
		break;
		case 'i':
		case 'I':
		printf("\n %c is Vowel",ch);
		break;
		case 'o':
		case 'O':
		printf("\n %c is Vowel",ch);
		break;
		case 'u':
		case 'U':
		printf("\n %c is Vowel",ch);
		break;
		default:
		printf("\n %c is not a Vowel",ch);
		break;	
	}
	return 0;
}
