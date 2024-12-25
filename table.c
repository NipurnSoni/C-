#include<stdio.h>
int main(){
	int n,i,t=1,j;
	printf("Enter: ");
	scanf("%d",&n);
	//mera dimag{
	for (i=n,j=1;i<=n*10 && j<=10;j++,i=i+n){
		printf("%d x %d are %d \n",n,j,i);
	}
//}
// easy logic{
	for(i=1;i<=10;i++){
		printf("%d \n",n*i);
	}

//}
	
}
