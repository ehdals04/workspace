#include <stdio.h>

int main(void){
	double x,y,r,c,t;
	 
	scanf("%lf %lf %lf", &x,&r,&y);

	c = 0;
	
	if (x*(r/100)>=y){
		printf("No");
		return 0;
	}
	
	while(x>0){
		x+=(x*(r/100));
		x-=y;
		
		c+=1;
	}
	
	printf("%.0lf", c);
	
	//if ((double) y <= (double)x*r/100.0){
	//	printf("No");
	//}
	//else{
	//	res = (double) x;
	//	while(res>0){
	//		res += res*r/100.0;
	//		res-= (double) u;
	//		years++
	//	}
	//}
	return 0;
}
