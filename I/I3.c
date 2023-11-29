#include <stdio.h>

void number(double *a, double *b, double *c);

int main(void){
	double a,b,c;
	while(scanf("%lf %lf %lf", &a, &b, &c)==3){
	number(&a,&b,&c);// & ¾²±â 
	printf("%lf %lf %lf\n", a,b,c);		
	}

	return 0;
}

void number(double *a,double *b,double *c){
	double n;
	
	if (*a>*b){
		n = *a;
		*a = *b;
		*b = n;
	}
	
	if (*b>*c){
		n = *b;
		*b = *c;
		*c = n;
	}
	
	if (*a>*b){
		n = *a;
		*a = *b;
		*b = n;
	}
	
}


