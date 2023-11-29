#include <stdio.h>

int main(void){
	int i,j,n;
	scanf("%d", &i);
	
	for(n=0; n<=i; n++){
		for(j=0; j<n; j++){
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
