#include <stdio.h>
#include <math.h>

int main(void){
	double x,v,a,h;
	
	scanf("%lf", &x);
	
	v = (sqrt(2)/12)*pow(x,3);
	
	a = sqrt(3)*pow(x,2);
	
	h = (sqrt(6)*x)/3;
	
	printf("%.2lf %.2lf %.2lf", v,a,h);
	return 0;
}

