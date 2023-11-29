#include <stdio.h>

int main(void){
	double m1, m2, r1,r, F;
	scanf("%lE %lE %lE", &m1, &m2, &r);//%lf 로 입력해도 상관없음 
	const double G = 6.67430e-11;
	r1 = r*1000;
	F = G*(m1*m2)/(r1*r1);//F = G*m1*m2/(r*r*1.0e6);
	printf("%le", F);//printf("%e",F)
	
	return 0;
}
