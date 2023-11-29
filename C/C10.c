#include <stdio.h>

int main(void){
	int a,b,c,d,box1,box2,area, perimeter;
	scanf("%d %d %d %d", &a,&b,&c,&d);
	area = a*b-c*d;
	perimeter = a+b+c+d+(b-d)+(a-c);
	printf("Area = %d, Perimeter = %d", area,perimeter);
	
	return 0;
}
