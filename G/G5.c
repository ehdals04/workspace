#include <stdio.h>

int main(void){
	
	int n,i,c;
	scanf("%d", &n);
	
	c = 0;
	
	for (i=2; i<n;i++){
		if (n%i==0){
			c++;
		}
	}
	
	printf("%d", c);
	return 0;
}
