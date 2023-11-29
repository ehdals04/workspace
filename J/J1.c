#include <stdio.h>


int max(int a[], int n);

int main(void){
	
	int a[100000], n, result;
	n = 0;
	
	while (scanf("%d", &a[n])!=EOF){
		n++;
	}
	
	result = max(a,n); //배열의 이름은 포인터다 
	
	printf("%d", result);
	return 0;
}

int max(int a[], int n){  
	int b,i;
	b = a[0];
	for(i=0; i<=n; i++){
		if(b<a[i]){
			b = a[i];
		}
	}
	
	return b;
}

//int max(int *x, int n){
//	int m=-1000000;				int m;
//								m  = x[0];
//	for(int i=0; i<n; i++){		for(int i=1; i<n; i++){
//		
//								}
//		if(m<x[i]){
//			m=x[i];
//		}
//	}
//	return m;
//}
