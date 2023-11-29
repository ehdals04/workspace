#include <stdio.h>

int main(void){
	double x1,y1,x2,y2,x3,y3, square , a1,a2,a3, area;
	
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	
	square = (x3-x1)*(y3-y2);
	a1 = (x3-x1)*(y3-y1)*0.5;
	a2 = (x2-x1)*(y1-y2)*0.5;
	a3 = (x3-x2)*(y3-y2)*0.5;
	
	area = square-(a1+a2+a3);
	
	printf("%.2lf", area); 
	
	return 0;
}
