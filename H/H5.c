#include <stdio.h>
#include <math.h>

int main(void){
	double a,b,c,d,mr,mi, dr,di;
	
	scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
	
	mr = (a*c-b*d);
	mi = (b*c+a*d);
	
	dr = (a*c+b*d)/(pow(c,2)+pow(d,2));
	di = (b*c-a*d)/(pow(c,2)+pow(d,2));
	
	printf("%.0lf %.0lf\n", mr,mi);
	if (pow(c,2)+pow(d,2)==0){
		printf("NONE");
	}
	else{
		printf("%.2lf %.2lf", dr,di);
	}
	
	return 0;
}
