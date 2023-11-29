#include <stdio.h>

int main(void){
	double download_speed, file_size,sec;
	scanf("%lf %lf", &download_speed, &file_size);
	
	sec = file_size*8/download_speed;
	printf("%.2lfsec", sec);
	return 0;
}

