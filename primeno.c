#include<stdio.h>
int main(){
int i,n,count=0;
printf("Enter No.: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
	
	if(n%i==0){
		count++;
	}
}
if(count>2){
	printf("Not a Prime No.");
}
else
	printf("Prime No.");
}
