#include<stdio.h>

int main(){
	float p;
	float r;
	float n;
	float result;
	printf("Enter p :");
	scanf("%f",&p);
	printf("Enter r :");
	scanf("%f",&r);
	printf("Enter n :");
	scanf("%f",&n);
	result=p*r*n/100;
	printf("simple interest of %f,%f and %f is : %f",p,r,n,result);
	return 0;
}
