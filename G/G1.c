#include <stdio.h>

int main(void){
	int x,y,c;
	char ch;
	x = 0; // �����̽� ��
	y = 0; // ���� ���� ���� �� 
	c = 0; // ���� ���� 
	
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
