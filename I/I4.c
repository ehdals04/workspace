#include <stdio.h>
#include <ctype.h>

int num(char ch);

int main(void){
	int a;
	char ch;
	
	while((ch = getchar())!=EOF){
		a = num(ch);
		
		if(a>0){
		printf("%c is a letter #%d.\n",ch, a);
		}
		else if(a<0){
			printf("%c is not a letter.\n",ch);
		}	
	}

	return 0;
}

int num(char ch){
	int n;
	
	if (isupper(ch)){
		n = ch-'A'+1;
	}
	else if(islower(ch)){
		n = ch-'a'+1;
	}
	else if(ch==' '||ch=='\n'){
		n = 0;
	}
	else{
		return -1;
	}
	
	
	return n;
}

