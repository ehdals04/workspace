#include <stdio.h>
#include <ctype.h>

int main(void){
	int l,u;
	l = 0;
	u = 0;
	
	char ch;
	ch = getchar();
	
	while (ch != EOF){
		if(islower(ch)!=0){
			l++;
		}
		else if(isupper(ch)!=0){
			u++;
		} 
		ch = getchar();
	}
	printf("%d %d", u,l);
	return 0;
}
