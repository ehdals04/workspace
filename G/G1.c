#include <stdio.h>

int main(void){
	int x,y,c;
	char ch;
	x = 0; // 스페이스 수
	y = 0; // 공백 제외 문자 수 
	c = 0; // 문장 개수 
	
	ch = getchar();
	
	while (ch !='#'){
		ch = getchar();
		if (ch ==' '){
			x++;

		}
		if (ch == '\n'){
			c++;

		}
		else{
			y++;
		}
	
	}
	printf("%d %d %d", x, c, y-x);
	return 0;
}
