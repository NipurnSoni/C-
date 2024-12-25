#include<stdio.h>
int main(){
	char ch;
	printf("Enter 'I' for Indian and 'F' for French :");
	scanf("%c",&ch);
	if(ch=='I'||ch=='i'){
		namaste();		
	}
	else if(ch=='F'||ch=='f'){
		bonjour();
	}

	return 0;
}
void namaste(){
		printf("Namaste \n");
}
void bonjour(){
		printf("Bonjour \n");
}
   
