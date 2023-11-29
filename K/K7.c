#include <stdio.h>

int main(void){
	long long int ch[12], s=0,n;
	
	scanf("%lld", &n);
	
	for(int i=11;i>=0;i--){
		ch[i]=n%10;
		n/=10;
	}
	
 
	for(int j=0;j<11;j++){
		if(j%2==0){
			s+=ch[j]*3;
		}
		else if(j%2!=0){
			s+=ch[j];
		}
	}
	
	if((s+ch[11])%10 == 0){
		printf("YES");
	}
	else{
		printf("NO");
	}	

	return 0;
}
