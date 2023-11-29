#include <stdio.h>

int happy_number(int n);


int main(void){
	int c,d;
	scanf("%d", &c);
	
	while(c!=1){//1과  4가 아니면 반복 
		d = happy_number(c);
		if (d==1){
			printf("HAPPY");
		}
		else{
			printf("UNHAPPY");	
		}
	return 0;
	}
}


int happy_number(int n){
	int a;
	a = 0;
	
	while(n>0){
		int b;
		b = n%10;
		a+=b*b;
		n = n/10;
	}
	
	return a;
}

