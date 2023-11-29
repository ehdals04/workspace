#include <stdio.h>

int main(void){
	int i,j;
	char ch;

	scanf("%c %d %d", &ch, &i, &j);
	
	chline(ch, i, j);
	
	return 0;
}


void chline(char ch, int i, int j){
	int l,k;
	

	for(l=1;l<=i-1;l++){
		printf("+");
	}	
	for(k=1;k<=j-i+1;k++){
		printf("%c",ch);
	}
	for(l=1;l<=i-1;l++){
		printf("+");
	}
}
