#include <stdio.h>
#include <string.h>
int main(void){
	int len_a, len_b;
	char a[31];
	char b[31];

	scanf("%s %s",a,b);
	len_a = strlen(a);
	len_b = strlen(b);
	printf("*%s %s*\n",a,b);
	printf("*%*d %*d*\n", len_a, len_a, len_b, len_b);
	printf("*%s %s*\n",a,b);
	printf("*%-*d %-*d*", len_a, len_a, len_b, len_b);

	return 0;
}
