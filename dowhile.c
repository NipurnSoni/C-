#include<stdio.h>
int main(){
	int n,s,j,i=1;
	printf("Enter: ");
	scanf("%d",&n);
	// find sum till n.
//	do{
//		s=s+i;
//		i++;
//	} while(i<=n);
//	printf("Sum is %d \n",s);
	// to print no. in reverse.
	for(i=1,j=n;i<=n && j>=1;i++,j--){
		printf("%d \n",j);
		s=s+i;
		
	}
	// to loops in one loop.
	printf("Sum is %d \n",s);
}
