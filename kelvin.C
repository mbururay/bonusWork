#include <stdio.h>

double toKelvin(double c);

double toKelvin(double c){
	return c+273.15;
}

int main(){
	double c;

	printf("Please enter your temperature in celcius : \n");
	scanf("%lf",&c);

	printf("The temperature in Kelvin is : %.4lf",toKelvin(c));
	printf("\n");

	return -1;

}
