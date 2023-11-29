#include <stdio.h>

int main(void){
	double a,b,c,d,area, perimeter;
	
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	
	area = (a*b)-(c*d);
	perimeter = a+b+c+d+(b-d)+(a-c);
	
	printf("Area = %.0lf, Perimeter = %.0lf", area, perimeter);
	return 0;
}

