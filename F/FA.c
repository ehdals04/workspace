#include <stdio.h>

int main(void){
	
	double p, q;
	int n,i;
	scanf("%lf %lf %d", &p, &q, &n);
	
	for (i=0; i<n; i++){
		p = p+(p*q);
		
	}
	printf("%.5lf", p);
	
	// while (y-- >0){
	//	s+=s*r;
	//}
	return 0;
}
