#include <stdio.h>

int main(void){
	
	int i;
	double n,a,s,s2;
	
	s = 0;
	s2 = 0;
	
	scanf("%lf", &n);
	
	
	for (i=1; i<=n; i++){
		a = 1.0/i;
		s += a;
	}
	 
	for (i=1; i<=n; i++){
		if (i%2==0){
			a = -1.0/i;
		}
		else{
			a = 1.0/i;

		}
		s2+=a;
	}
	printf("%.5lf %.5lf", s,s2);
	return 0;
	
	
	
	//for (i=1; i<=n; i++){
	//a = 1.0/i;
	//s += a;
	//s2 += sign *t;
	//sign *=-1
 
	}
}
