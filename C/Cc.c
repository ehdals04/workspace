#include <stdio.h>

int main(void){
	double x1,y1,x2,y2,x3,y3,a,b,c,d,area, perimeter;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	a = y1-y2;
	b = x2-x1;
	c = y1-y3;
	d = x2-x3;
	
	area = a*b-c*d;
	perimeter = a+b+c+d+(b-d)+(a-c);
	printf("Area = %.0lf, Perimeter = %.0lf", area, perimeter);
	return 0;
}
