#include <stdio.h>

int main(void){
	int h;
	double g,t,n;
	g = 0.0;
	
	scanf("%d", &h);
	
	if (h<40){
		g+=h*10;
	}
	else {
		g += 40*10 + (h-40)*10*1.5;
	}
	
	if (g<=300){
		t = g*0.15;
	}
	else if (g<=450){
		t = 300*0.15;
		t+= (g-300)*0.2;
	}
	else {
		t = 300*0.15;
		t += 150*0.2;
		t += (g-450)*0.25;
	}
	
	n = g-t;
	
	printf("%.2lf %.2lf %.2lf", g,t,n);
	return 0;
}
