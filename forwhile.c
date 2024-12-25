#include<stdio.h>
int main(){
	int n,i,j=1;
	printf("Enter: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("%d \n",i);
	}
	printf("While \n");
	while(j<=n){
		printf("%d \n",j);
		j++;
	}
}
