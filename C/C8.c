#include <stdio.h>
#include <math.h>

int main(void){
	double Radius, Area, Perimeter;
	
	scanf("%lf", &Radius);
	Area = M_PI*Radius*Radius;
	Perimeter = 2*M_PI*Radius;
	
	printf("Radius = %.1lf, Area = %.1lf, Perimeter = %.1lf", Radius, Area, Perimeter);
	return 0;
}
