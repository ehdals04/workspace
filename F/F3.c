#include <stdio.h>

int main(void){
	int i,j,k,l;
	char n;
	scanf("%c", &n);
	
	for (i=0; i<=n-65;i++){
		for (j=0;j<n-i-65;j++){
			printf("-");
		}
		for (k=65; k<=65+i;k++){
			printf("%c", k);
		}
		for (l=64+i;l>=65;l--){
			printf("%c", l);
		}
		printf("\n");
			}
	return 0;
}
