#include <stdio.h>
#include <math.h>
int main(void){
	double x1,y1,x2,y2,distance;
	scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
	distance = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%.4lf", sqrt(distance));
	return 0;
}
