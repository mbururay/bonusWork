#include <stdio.h>

double customerNo;
double unitNo;
double total;
double current;
double highestBill;
double lowestBill;
double billCalc(double unitNo);

double billCalc(double unitNo){
	if(unitNo <= 100){
		return 20+(0.50*unitNo);
	}else if(unitNo <= 300){
		return 20+(0.75*unitNo);
	}else if(unitNo <= 600){
		double total = 20+(1.2*unitNo);
		if(total > 500){
			return total*1.1;
		}else{
			return total;
		}
	}else if(unitNo >  600){
		double total = 20+(1.5*unitNo);
		if(total > 500){
			return total*1.1;
		}else{
			return total;
		}
	}else{
		printf("There has been an error");
		return -1;
	}
}

int main(){
	printf("Please enter the number of customers \n");
	scanf("%lf",&customerNo);
	double highestBill = 0;
	double lowestBill = 10000000;
	double sum = 0;

	for(int i = 1 ; i <= customerNo ; i++){
		printf("Enter the units consumed by customer %d" , i);
		printf("\n");
		scanf("%lf",&unitNo);
		current = billCalc(unitNo);
		printf("The current bill for the customer is $%lf" , current);
		printf("\n");

		if(highestBill < current){
			highestBill = current;
		}

		if(lowestBill > current){
			lowestBill = current;
		}

		sum = current++;

	}

	printf("The highest bill achieved was $%lf" , highestBill);
	printf("\n");

	printf("The lowest bill achieved was $%lf" , lowestBill);
	printf("\n");

	printf("The average bill achieved was $%lf" , sum/customerNo);
	printf("\n");
	return -1;

}

