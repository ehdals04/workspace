#include <stdio.h>


unsigned long long l[94];
unsigned long long Fibonacci(unsigned long long n);

int main(void){
	int n;
	unsigned long long r;
	scanf("%d", &n);
	
	while(n>=0){
	r = Fibonacci(n);
	printf("#%d: %llu\n",n,r);
	
	scanf("%d", &n);				
	}
	

	return 0;
}


unsigned long long Fibonacci(unsigned long long n){
	long long result;
	if (n==0){
		return 0;
	}
	else if (n<=2){
		return 1;
	}
	if(l[n]!=0){
		//printf("%llu\n", l[n]); 
		return l[n];
	}
	
	l[n] = Fibonacci(n-2)+Fibonacci(n-1);

	return l[n];
}
