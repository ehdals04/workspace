#include <stdio.h>

int main(void){
	double a,b,c,d,total,result;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	total = a+b+c+d;
	result = (d/total)*100;
	
	printf("%.2lf%%", result);
	return 0;
}
