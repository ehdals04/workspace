#include <stdio.h>

int main(void){
	
	int ch1[100][100];
	int ch2[100][100];
	int s[100][100];
	
	int n,p,m,i,j,k;
	
	scanf("%d %d %d", &n, &m, &p);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&ch1[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			scanf("%d",&ch2[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			s[i][j]=0;
			for(k=0;k<m;k++){
				s[i][j]+=ch1[i][k]*ch2[k][j];
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
