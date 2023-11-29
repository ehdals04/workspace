#include <stdio.h>

int main(void){
	double Fahrenheit, Celsius, Kelvin;
	scanf("%lf", &Fahrenheit);
	Celsius = 5.0/9.0*(Fahrenheit-32.0);
	Kelvin = Celsius + 273.16;
	
	printf("Fahrenheit: %.2lf = Celsius: %.2lf = Kelvin: %.2lf ", Fahrenheit, Celsius, Kelvin);
	return 0;
}
