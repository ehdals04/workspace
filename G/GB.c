#include <stdio.h>

int main(void){
	long long int n, k, i, b, c, d, x;
	b = 1;
	c = 1;
	d = 1;
	scanf("%lld %lld",&n,&k);
	for(i=n;i>n-k;i--){
		b=b*i;
	}
	for(i=k;i>0;i--){
		c=c*i;
	}
	x=b/c;
	printf("%lld",x);
	
	return 0;
}
