#include<stdio.h>
int sum(int a,int b){ //void bhi chalega.
	printf("Enter 'A' and 'B' for Sum :");
	scanf("%d %d",&a, &b);
	printf("Sum is %d",a+b);
}
int main(){
	int a,b;
	sum(a,b);

	return 0;
}
/*/second method
int sum(int a,int b){ //void bhi chalega.
	printf("Enter 'A' and 'B' for Sum :");
	scanf("%d %d",&a, &b);
	printf("Sum is %d",a+b);
}
int main(){
	int a,b;
	sum(a,b);

	return 0;
}*/

