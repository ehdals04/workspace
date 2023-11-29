#include <stdio.h>

int main(void){
	int a,b,s,c,i;
	scanf("%d %d", &a, &b);

	for (i=a; i<=b; i++){
		s = i*i;
		c = i*i*i;
		printf("%d %d %d\n", i,s,c);		
	}
	
	return 0;
}
