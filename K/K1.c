#include <stdio.h>
#include <stdlib.h>


compare(const int* a, const int* b);

int main(void){
	int n;
	scanf("%d", &n);
	
	int ch[n+1];
	
	for(int i=0; i<n; i++){
		scanf("%d", &ch[i]);
	}
	
	qsort(ch,n,sizeof(int),compare);
	
	
//	for(int j=0; j<n;j++){
//		printf("%d", ch[j]);
//	}
	if(n%2!=0){
		printf("%d", ch[n/2]);
	}
	else if(n%2==0){
		printf("%.1lf", (double)(ch[n/2-1]+ch[n/2])/2);
	}
	return 0;
}

int compare(const int* a, const int* b){
	if(*(int*)a>*(int*)b){ //괄호가 <로 
		return 1;
	}
	else if(*(int*)a<*(int*)b){ // 괄호가 >로 바뀌면 크기가 큰 순서대로 정렬한다. 
		return -1;
	}
	else{
		return 0;
	}
}
