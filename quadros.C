#include <stdio.h>
#include <math.h>

int  quadFormula(double a, double b, double c);
int  quadFormula(double a, double b, double c){
	double disc = sqrt((b*b)-(4*a*c));
	double solution1 = ((-1*b)+disc)/(2*a);

	double solution2 = ((-1*b)-disc)/(2*a);
	printf("The first solution is : %lf ",solution1);
	printf("\n");
	printf("The second solution is : %lf",solution2);

	printf("\n");
	return -1;

}

int main(){
	int a;
	int b;
	int c;

	printf("Enter the value of a : \n");
	scanf("%lf",&a);
	printf("Enter the value of b : \n");
	scanf("%lf",&b);
	printf("Enter the value of c : \n");
	scanf("%lf",&c);

	printf("The solutions are : ",quadFormula(a,b,c));
	return -1;
}
	
