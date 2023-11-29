#include <stdio.h>

int main(void){
	int a,b,i,j;
	a = 0;
	b = 0;
	int ch1[100][100];
	int ch2[100][100];
	int s[100][100];
	
	scanf("%d %d", &a, &b);
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d", &ch1[i][j]);
		}
	}
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d", &ch2[i][j]);
		}
	}
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			s[i][j] = ch1[i][j]+ch2[i][j];
		}
	}

	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
