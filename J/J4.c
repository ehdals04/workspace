#include <stdio.h>

long long int combination(long long int a, long long int b);

int main(void){
	long long int a,b,l,r,result;
	
	
	scanf("%lld %lld", &a, &b);
	l = combination(a-2,b-1);
	r = combination(a-2,b+1);
//	printf("%d\n",l);
//	printf("%d\n",r);
	
	result = l+r;
	
	printf("%lld", result);
	return 0;
}

long long int combination(long long int a, long long int b){
	
	long long int s = 0;
	long long int n,m,i;
	n = 1;
	m = 1;
	
	for(i=a; i>a-b; i--){
		n*=i;
	}
	for(i=b;i>0;i--){
		m*=i;
	}
	
	s = n/m;
	
	return s;
}
