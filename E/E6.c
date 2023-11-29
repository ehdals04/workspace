#include <stdio.h>

int main(void){
	double k,f,c;
	scanf("%lf",&k);

	c = k-273.16;
	f = 9.0/5.0*c+32;
	printf("%.2lf %.2lf",f,c);
	return 0;
}
