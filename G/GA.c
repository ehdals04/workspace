#include <stdio.h>
#include <math.h>

int main(void){
	double a, b, c, d, e, r1, r2;
	
	while(scanf("%lf %lf %lf",&a, &b, &c)==3){
		d = sqrt(b*b-4*a*c);
		e = b*b-4*a*c;
		if (e<0){
			printf("Imaginary root\n");
		}
		else{
			r1 = (-b+d)/(2*a);
			r2 = (-b-d)/(2*a);
			if (r1==r2){
				printf("%.3lf\n",r1);
			}
			else{
				printf("%.3lf %.3lf\n", r1, r2);
			}
		}
	}
	return 0;
}
