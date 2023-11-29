#include <stdio.h>

int main(void){
	int n,p,a,b,c,s,i;
	double d,t;
	char ch;
	
	a = 0;
	b = 0;
	c = 0;
	s = 0;
	d = 0;
	t = 0;
	p = 0;
	
	scanf("%d", &n);
	
	for (i=0; i<=n; i++){
		ch = getchar();
		scanf("%d",p);		
		switch(ch){
			case 'a':
				a += p;
				printf("a\n");
				break;
			case 'b':
				b += p;
				printf("b\n");				
				break;
			case 'c':
				c += p;
				printf("c\n");
				break;
									
		}
		s=a+b+c;	
	}
	
	if(s<5){
		d=6.50;
	}
	else if(s<20){
		d=14.00;
	}
	else{
		d = 14.0+(s-20)*0.5;
	}
	
	t += a*2.05;
	t += b*1.15;
	t += c*1.09;
	
	if (t>=100){
		t *=0.95;
		t+=d;
	}
	else{
		t+=d;
	}
	printf("%.2lf", t);
	return 0;
}
