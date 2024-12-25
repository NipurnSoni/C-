#include<stdio.h>
int sum(int n){
	if(n==1){
		return 1;
	}
	int sumN1=sum(n-1);
	int sumN=sumN1+n;
	return sumN;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
