#include <stdio.h>

int main(void){
	int n,i,j;
	scanf("%d", &n);
	int ch[n+1];
	
	for (i=0;i<n;i++){
		scanf("%d", &ch[i]);
	}
	
	for (j=n-1; j>=0; j--){
		printf("%d ", ch[j]);
	}
	return 0;
}
