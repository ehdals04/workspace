#include <stdio.h>

int main(void){
	int l;
	l = 0;
	
	char ch;
	
	while((ch = getchar())!=EOF){
		if (ch =='('){
			l++;
		}
		else if(ch ==')'){
			l--;
		}
		
		if(l<0){
			printf("No");
			break;
		}
	}
	
	
	if (l==0){
		printf("Yes");
	}
	else if(l>0){
		printf("No");
	}
	return 0;
} 
