#include <stdio.h>

int main(void){
	
	int n,i,j;
	char ch;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		for(ch='A'+n-1; ch>=(('A'+n)-i); ch--){
			printf("%c",ch);
		}
	printf("\n");
	}
	return 0;
}
