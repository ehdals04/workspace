#include <stdio.h>

int main(void){
	int c;
	c = 0;
	char ch;
	
	while ((ch = getchar())!=EOF){
		if (ch=='c'){
			if(ch==' '){
				if(ch=='t'){
					c++;
				}
			}
		}
	}
		
	printf("%d", c);
	return 0;
}


































//prev = ' '; pprev = ' ';
//ncxt = 0;
//
//while ((ch= getchar())!=EOF){
//	if(pprev =='c'&&ch=='t')
//	ncxt++;
//	pprev = prev;
//	prev = ch;
//}
//
//printf("%",ncxt);
