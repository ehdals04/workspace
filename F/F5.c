#include <stdio.h>
#include <string.h>

int main(void){
	int i;
	char ch[101];
	scanf("%s", ch);
		
	for(i=(int)strlen(ch)-1;i>=0;i--){
		printf("%c", ch[i]);
	}
	return 0;
}
