#include <stdio.h>

#define DISCOUNT_RATE 0.10
double priceGetter(double price);
int main(){
	double price;
	
	
	printf("Enter the original price of the given item");
	scanf("%lf",&price);
	printf("The discounted price is : %.2lf",priceGetter(price));
	return -1;
}

double priceGetter(double price){
	return price - (price*DISCOUNT_RATE);
}

