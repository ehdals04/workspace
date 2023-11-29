#include <stdio.h>

int main(void){
	long long n, money, total;
	money = 1000;
	total = 0;
	scanf("%lld", &n);
	while (n>0){
		total = total+money;
		money = money+1000;
		n--;
	}
	printf("%lld", total);
	return 0;
}
