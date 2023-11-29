#include <stdio.h>

int main(void){
	int s,e,n;
	s = 0;
	e = 0;
	n = 0;
	
	char ch;
	ch = getchar();
	while(ch != EOF){

		
		ch = getchar();
		if (ch==' '){
			s++;
		}
		if (ch=='\n'){
			e++;
		}
		else{
			n++;
		}	
	}
	printf("%d %d %d",s,e,n-s);
	return 0;
}
