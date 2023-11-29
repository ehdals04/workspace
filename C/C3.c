#include <stdio.h>
//2023564003 °ûµ¿¹Î 

int main(void){
	double a,b,c,d;
	scanf("%lf %lf %lf %lf", &a, &b,&c,&d);
	printf("%.2lf",(a*b-c*d)/(a-b*c-d));
	return 0;
}
