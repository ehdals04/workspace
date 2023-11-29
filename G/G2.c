#include <stdio.h>

int main(void){
	
	int i,c,c2;
	double s,s2, avg, avg2;
	
	c = 0; c2 = 0; s = 0; s2 = 0, avg = 0, avg2 = 0;	
	
	
	scanf("%d", &i);

	if (i==0){
		return 0;
	}	
	
	
	while (i!=0){
		if (i%2==0){
			s2+=i;
			c2++;
		}
		else{
			s+=i;
			c++;
		}
		scanf("%d", &i);
	}
	
	
	if (c==0){
		avg = 0.00;
		avg2 = s2/c2;
	}
	else if (c2==0){
		avg = s/c;
		avg2 = 0.00;
	}
	else{
		avg = s/c;
		avg2 = s2/c2;
	}

	
	printf("%d %.2lf %d %.2lf", c2, avg2, c, avg);
	
	return 0;
}
