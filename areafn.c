#include<stdio.h>
int areaSquare(int a){
	printf("%d\n",a*a);
}
float areaCircle(float r){
	printf("%f\n",3.14*r*r);
}
int areaRectangle(int x, int y){
	printf("%d\n",x*y);
}
int main(){
	int a,r,x,y; 
	areaSquare(4);
	areaCircle(5);
	areaRectangle(4,5);
	return 0;
}
