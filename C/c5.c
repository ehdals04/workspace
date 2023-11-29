#include <stdio.h>

int main(void){
	double a,b,c,d,e,f;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = a*b*c;
	e = a+b+c;
	f = d/e;
	printf("%.1lf", f);
	return 0;
}
