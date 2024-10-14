#include<stdio.h>

int main(){
	float b;
	float h;
	float result;
	printf("Enter b :");
	scanf("%f",&b);
	printf("Enter h :");
	scanf("%f",&h);
	result=0.5*(b*h);
	printf("Area of triangle of %f and %f is : %f",b,h,result);
	return 0;
}
