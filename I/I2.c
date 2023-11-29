#include <stdio.h>

double harmonicMean(double a, double b);

int main(void){
	double a,b,c;
	
	while(scanf("%lf %lf", &a, &b)==2){
		c = harmonicMean(a,b);
		printf("%.3lf\n", c);
	}
	return 0;
}

double harmonicMean(double a, double b){
	double c,d;
	c = ((double)1/a + (double)1/b)/2;
	d = 1/c;
	
	return d;
}
