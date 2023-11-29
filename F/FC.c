#include <stdio.h>

int main(void){
	long long int n,m,i,s;
	
	scanf("%lld" ,&n);
	
	s = 0;
	
	for (i=0; i<n;i++){
		scanf("%lld", &m);
		s+=m;
	}
	
	printf("%lld", s);
	return 0;
}
