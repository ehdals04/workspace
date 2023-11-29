#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	int **matrix = (int**)malloc(sizeof(int)*n);
	
	for(int i=0; i<n; i++){
		matrix[i] = (int*)malloc(sizeof(int)*n);
	} 
	
	return 0;
}
