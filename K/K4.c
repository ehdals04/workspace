#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b){
	if(*(int*)a>*(int*)b){
		return 1;
	}
	else if(*(int*)a<*(int*)b){
		return -1;
	}
	else{
		return 0;
	}
}

int main(void){
	int n,k1,k2,k3,a,b,c,s;
	s = 0;
	scanf("%d %d %d %d", &n,&k1,&k2,&k3);
//	scanf("%d", &n);
	a = k1; b = k2; c = k3;
	
	int ch[n];
	for(int i=0; i<n; i++){
		scanf("%d", &ch[i]);
	}
	
	qsort(ch,n,sizeof(int),compare);
	
	s = ch[a-1]+ch[b-1]+ch[c-1];
	
	printf("%d", s);
//	for(int j=0; j<n; j++){
//		printf("%d",ch[j]);
//	}
	
	return 0;
}
