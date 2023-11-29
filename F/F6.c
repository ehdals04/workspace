#include <stdio.h>

int main(void){
	double a,b,n,m;
	
	while (scanf("%lf %lf", &a, &b)){
		n = a-b;
		m = a*b;
		printf("%.3lf\n", n/m);
	}
	
	//while (scanf("%lf %lf", &a, &b)==2){
	//n = a-b;
	//m = a*b;
	//printf("%.3lf\n", n/m);
	}
	
	return 0;
}
