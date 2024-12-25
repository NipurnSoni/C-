#include<stdio.h>
int main(){
	int i,n;
	for(i=1; ;i++){
		printf("Enter NO.: ");
		scanf("%d",&n);
		if(n%2!=0)
			break;
	}
		printf("End");
}
/* by do while
int n;
do{
scanf("%d",&n);
	if(n%2!=0){
		break;
	}
}while(1);


