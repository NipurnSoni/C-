#include<stdio.h>
int fact(int n){
	if(n==1){
		return 1;
	}
	int factN1=fact(n-1);
	int factN=factN1*n;
	return factN;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
