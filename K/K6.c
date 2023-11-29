#include <stdio.h>

int value(int gate, int a, int b){
	if(gate==1){
		return a||b;
	}
	else if(gate==2){
		return a&&b; //&는 bit-wise or -->각 비트단위로 답을  구한다, &&는 전체값에서 답을 구한다(?) 
	}
	else if(gate==3){
		return !(a||b);
	}
	else if(gate==4){
		return !(a&&b);
	}
	else if(gate==5){
		return a!=b;
	}
	else{
		return 0;
	}
}

void truth_table(int gate_a, int gate_b, int gate_c){
	printf("w x y z F\n");
	
	for(int i=0;i<2;i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<2;k++){
				for(int l=0; l<2; l++){
					int w = 0;
					int a = value(gate_a,w,i);
					int b = value(4,j,k);
					int c = value(3,a,b);
					int d = value(gate_b,k,l);
					int e = value(gate_c,b,d);
					int f = value(5,c,e);
					printf("%d %d %d %d %d\n", i,j,k,l,f);
				}
			}
		}
	}
}
int main(void){
	int A,B,C,F,result;
	
	scanf("%d %d %d", &A, &B, &C);
	
	truth_table(A,B,C);
//	result = value(A,B,C);
//	
//	printf("%d", result);
	return 0;
}
