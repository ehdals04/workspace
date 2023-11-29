#include <stdio.h>

int main(void){
	double cup, pint, ounce, table, tea;
	scanf("%lf", &cup);
	
	pint = cup*0.5;
	ounce = cup*8;
	table = ounce*2;
	tea = table*3;
	
	printf("%lf cups are equivalent to each of the following:\n%lf pints\n%lf ounces\n%lf tablespoons\n%lf teaspoons", cup, pint, ounce, table, tea);
	return 0;
}
