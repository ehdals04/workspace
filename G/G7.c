#include <stdio.h>

int main(void){
	int n,p,i,j,c;
	scanf("%d", &n);
	p = 0;
	for (i=2; i<=n; i++){
		c=0;
		for(j=2; (j*j)<=i; j++){
			if(i%j==0){
				c=1;
			}
		}
		if(c==0){
			p++;
		}
	}
	printf("%d", p);
//	if(n==1) res =0;
//	else if(n==2) res = 1;
//	else {
//		res = 1;
//		for(i=3; i<n; i++2){
//			flag = 1;
//			for (j=3; j<i; j+=2){
//				if (i%j==0){
//					flag = 0; //�Ҽ��� �߰��ϴ� ���� �������� 
//					break;
//				}
//			}
//			if (flag ==1) res++;
//		}
//	}
	
//	printf("%d", p);
	return 0; 
}
