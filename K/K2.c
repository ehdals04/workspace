#include <stdio.h>
#include <stdlib.h>



int main(void){
	int n,m,i,c;
	m = 0;
	c = 0;
	scanf("%d", &n);

	int ch[n+1];
	int ch2[10001]={0};
	
	for(int i=1; i<=n; i++){
		scanf("%d", &ch[i]);
	}
	
	for(int j=1; j<=n; j++){
		ch2[ch[j]]++;
	}
	
//	for(int i=1; i<=n; i++){
//		printf("%d ", ch2[i]);
//	}
//	
//	printf("\n");
//	
//	for(int i=1; i<=n; i++){
//		printf("%d ", ch[i]);
//	}
	
//	printf("\n");

	for(int k=1; k<=10000; k++){
		if(ch2[k]>=m){
			m = ch2[k]; //ÃÖ´ë ºóµµ ¼ö 
//			printf("%d ", m);
			c = k;
		}
	}

//	printf("\n");
	
//	c = ch[m];

	printf("%d %d", c,m);
	return 0;
}
