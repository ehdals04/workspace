#include <stdio.h>
#define G 3.785 // L_per_GAL
#define M 1.609 // KM_per_MILE

int main(void){
	double gallon,mile,a,b,c;
	scanf("%lf %lf", &gallon,&mile);
	a = gallon/mile; 
	b = (gallon*M)/100;
	c = (mile*G)/b;
	printf("%.1lf mpg or %.1lf liters / 100Km.",a,c);
	//x miles : y gallon , z: 100km
	//z*y = x*100
	//z = ((x*1.609*100))/y*3.785
	return 0; 
}



#include <stdio.h>
#include <string.h>

int main(void){
	double km, L, mile, gallon, mile_per_gallon, L_per_km;
	
	scanf("%lf %lf", &mile, &gallon);
	km = mile*0.01609;
	L = gallon*0.03785;
	printf("%.1lf %.1lf\n", km, L);
	mile_per_gallon = mile/gallon;
	L_per_km = km/L;
	
	printf("%.1lf %.1lf", mile_per_gallon, L_per_km);
	return 0;
}
