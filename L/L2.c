#include <stdio.h>

int main(void){
	
	int n,c=0;
	scanf("%d", &n);
	
	while(n!=1){
		if(n%2==0){
			n = n/2;
		}
		else if(n%2!=0){
			n = 3*n+1;
		}
		c++;
//		if(n==1){
//			break;
//		}
	}
	
	printf("%d", c-1);
	return 0;
}
