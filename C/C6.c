#include <stdio.h>
//2023564003 °ûµ¿¹Î
 
int main(void){
	double a,hob,doe,mal,liters;
	scanf("%lf", &a);
	hob = a/0.00018039;
	doe = hob/10;
	mal = doe/10;
	liters = a*1000;
	printf("%.2lf cubic meters are equivalent to each of the following:\n",a);
	printf("%.2lf hob\n", hob);
	printf("%.2lf doe\n", doe);
	printf("%.2lf mal\n", mal);
	printf("%.2lf liters\n", liters);
	return 0;
} 
