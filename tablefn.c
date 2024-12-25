#include<stdio.h>
void printTable(int n){
	int i;
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d \n",n*i);
	}
}
int main(){
	int n; 
	printTable(n);
	return 0;
}
