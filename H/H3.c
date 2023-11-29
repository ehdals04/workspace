#include <stdio.h>

int main(void){
	double r,a,w,h,bac;
	
	scanf("%lf %lf %lf %lf", &r, &a, &w, &h);
	
	if (r==0){
		bac = (a*5.14)/(0.73*w) - 0.015*h;
	}
	else if (r==1){
		bac = (a*5.14)/(0.6*w) - 0.015*h;
	}
	
	if (bac<0){
		printf("0.00000");
	}
	else{
		printf("%.5lf",bac);
	}
	
	return 0;
}
