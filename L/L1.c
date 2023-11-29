#include <stdio.h>
#include <math.h>

int calculate_distance(int x1,int y1,int x2,int y2){
	int answer = fabs(x1-x2)+fabs(y1-y2);
	
	return answer;
}


int main(void){
	int n,m=0, result;
	scanf("%d", &n);
	
	int ch1[n], ch2[n];
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &ch1[i], &ch2[i]);
	}	
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			result = calculate_distance(ch1[i], ch2[i], ch1[j], ch2[j]);
			if(result>m){
				m = result;
			}
		}
	}
	
	printf("%d", m);
	return 0;
}
