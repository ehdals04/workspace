#include <stdio.h>

int main(void){
	int n,c=0;
	scanf("%d", &n);
	int ch[n];
	int result[10001] = {0};
	for(int i=0; i<n; i++){
		scanf("%d", &ch[i]);
	}
	
	for(int j=0; j<n; j++){
		result[ch[j]]++;
	}
	
//	for(int k=1; k<=n; k++){
//		printf("%d", result[k]);
//	}
	
	for(int k=1; k<=10000; k++){
		if(result[k]>0){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
