#include<stdio.h>
int main(){
	int n;
do{
	printf("Enter No.: ");
	scanf("%d",&n);
		if(n%7==0){
			break;
		}
	}while(1);// here 1 is for true, i.e it will be a infinite loop.
	printf("Multiple of 7");
}

