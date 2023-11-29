#include <stdio.h>

void to_base_n(int x, int y);

int main(void){
	int n,m;
	
	scanf("%d %d", &n, &m);
	to_base_n(n,m);
	return 0;
}


void to_base_n(int x, int y){
	int z;
	
	z = x%y;
	
	if(x>=y){
		to_base_n(x/y,y);
	}
	
	printf("%d",z);
}
