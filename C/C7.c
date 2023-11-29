#include <stdio.h>

int main(void){
	double r1,r2,r3,r4,r5,a,b,c,d,e;
	int result;
	scanf("%lf %lf %lf %lf %lf", &r1, &r2, &r3, &r4, &r5);
	a = r1+r2;
	b = a*r3/(a+r3);
	c = b+r5;
	d = c*r1/(c+r1);
	e = r3+d+r4;
	result = e+0.5;
	printf("%d\n", result);

	return 0;
}






