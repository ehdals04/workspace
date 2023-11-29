#include <stdio.h>

int main(void){
	int n;
	double income, tax;
	
	scanf("%d %lf", &n, &income);
	
	if (n==1){
		if (income>=17850){
			tax = (17850*0.15)+((income-17850)*0.28);
		}
		else{
			tax = income*0.15;
		}
	}
	
	if (n==2){
		if (income>23900.0){
			tax = (23900.0*0.15)+((income-23900.0)*0.28);
		}
		else{
			tax = income*0.15;
		}
	}
	
	if (n==3){
		if (income>29750.0){
			tax = (29750.0*0.15)+((income-29750.0)*0.28);
		}
		else{
			tax = income*0.15;
		}
	}
	
	if (n==4){
		if (income>14875.0){
			tax = (14875.0*0.15)+((income-14875.0)*0.28);
		}
		else{
			tax = income*0.15;
		}
	}	
	
	printf("%.2lf", tax);
	
	return 0;
}
