#include <stdio.h>

int main(void){
	int day, hour, min, sec,sec2;
	scanf("%d", &sec);
	while (sec>0){
		min = sec/60%60;
		hour = sec/3600%24;
		sec2 = sec%60;
		day = sec/3600/24;
		printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n", sec, day, hour, min, sec2);
		scanf("%d", &sec);
	}
	//nn=n;
	//s=n%60; n=n/60;
	//m=n%60; n=n/60;
	//h=n%24; n=n/24;
	//d=n;
	return 0;
}
