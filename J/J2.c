#include <stdio.h>

int s_min(int a[], int m);

int main(void){
	int a[100000], n, result, i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	result = s_min(a, n);
	
	printf("%d", result);
	return 0;
}


int s_min(int a[], int m){
	int b,c,d;
	d = 10000001;
	b = a[0];
	c = 0;
	
	for(c=0; c<m; c++){
		if(b>a[c]){
			b = a[c];
		}
	}
	
	for(c=0; c<m; c++){
		if(a[c]>b&&d>a[c]){
			d = a[c];
		}
	}
	return d;
}
