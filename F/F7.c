#include <stdio.h>

int main(void){
	int a,b,s,c,i,t;
	scanf("%d %d", &a, &b);
	while (a!=b && b>a ){
	t = 0;
		for (i=a; i<=b;i++){
			s = i*i;
			t+=s;
		}
	printf("%d\n", t);
	scanf("%d %d" ,&a, &b);
	}
	
	
	//while (a<b){
	//t = 0;
	//	for (i=a; i<=b;i++){
	//		s = i*i;
	//		t+=s;
	//	}
	//printf("%d\n", t);
	//scanf("%d %d" ,&a, &b);
	}
	
	return 0;
}
