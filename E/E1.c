#include <stdio.h>
#define H 60

int main(void){
	int a,hour,min;


	while (1){
		scanf("%d", &a);
		hour = a/H;
		min = a-hour*H;
		if (a>=1){
			printf("Time in minute(s):   %d =   %d hour(s) and %d minute(s)\n",a,hour,min);
		}
		else if(a<1){
			break;
		}
	}
	return 0;
}
