#include <stdio.h>
#include <math.h>


void erastos(int n, int a[]){
	
	int m,i,j;
	m = (int)sqrt(n)+1;
	
	for(i=2;i<m;i++){
		if(a[i]==0){
			for(j=i*i; j<=n;j+=i){
				a[j]=1;
			}
		}
	}
	
}

int main(void){
	int n,c,i,j;
	c = 0;
	scanf("%d", &n);
	int a[n];
	
	for(i=0; i<=n; i++){
		a[i] = 0;	
	}
	
	erastos(n,a);
	
	printf("The prime numbers from 1 to %d:\n", n);
	
	for(j=2;j<=n;j++){
		if(a[j]==0){
			printf("%d ",j);
			c++;
		}
	}
	printf("\n");
	printf("The number of prime numbers from 1 to %d is %d.\n",n,c);
	
	
	return 0;
}



