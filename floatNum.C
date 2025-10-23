#include <stdio.h>

float product(float a, float b);
float sum(float a, float b);


float product(float a, float b){
	return a*b;
}

float sum(float a , float b){
	return a+b;
}

int main(){
	float a;
	float b;

	printf("Enter your first float number : ");
	scanf("%f",&a);

	printf("\n");
	printf("Enter your second float number : ");
	scanf("%f",&b);

	printf("\n");
	printf("The product of the given numbers are : %.3f",product(a,b));
	
	printf("\n");
	printf("The sum of the given numbers are : %.2f",sum(a,b));
	printf("\n");

	return -1;
}
