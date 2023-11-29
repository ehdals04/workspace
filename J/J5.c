#include <stdio.h>

int main(void){
	int ch[500][500];

	int n,m,row,column, x,y,s,i,j;
	row = 0;
	column = 0;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; i++){
			scanf("%d", &ch[i][j]);
		}
	}
	
	
	for(i=0; i<n; i++){
		s = 0;
		for(j=0; j<m; j++){
			s+=ch[i][j];
		}
		if(s>row){
			x = i+1;
			row = s;
		}
	}
	
	for(j=0; j<m; j++){
		s = 0;
		for(i=0; i<n; i++){
			s+=ch[i][j];
		}
		if(s>column){
			y = j+1;
			column = y;
		}
	}
	
	printf("%d %d",x,row);
	printf("%d %d",y,column);
	return 0;
}
