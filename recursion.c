#include<stdio.h>
void printHello(int count){
	if(count==0){
		return;
	}
	printf("Hello!\n");
	printHello(count-1);
}
int main(){
	printHello(5);
	return 0;
}
