#include <stdio.h>

int main(void){
	
	int n;
	n = 0;
	char ch, ch2;
	
	ch = getchar();
	ch2 = 'a';
	while(ch!='#'){
		
		if (ch2=='e' && ch=='i'){
			n++;
		}
		ch2 = ch;
		ch = getchar();
	}
	printf("%d", n);
	return 0;
}
