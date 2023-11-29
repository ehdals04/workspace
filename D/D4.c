#include <stdio.h>
#include <string.h>

int main(void){
	char a[31];
	char b[31];
	int c, len_a, len_b, result;
	
	scanf("%s %s",a,b);
	scanf("%d",&c);
	len_a = strlen(a);
	len_b = strlen(b);
	result = len_a+len_b;
	printf("%d %d", result, c);
		
	return 0;
}
