#include <stdio.h>

int main(void){
	long long n, m, min, max, sum, time;
	scanf("%lld %lld", &n, &m);
	min = n-m;
	max = n+m;
	time = max-min+1;
	sum = 0;
	while (time > 0){
		sum = sum + min;
		min++;
		time--;
	}
	printf("%lld", sum);
	return 0;
}
