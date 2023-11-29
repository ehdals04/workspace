#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b){
	if(*(int*)a>*(int*)b){
		return 1;
	}
	else if(*(int*)a>*(int*)b){
		return -1;
	}
	else
	return 0;
}

double trimmed_average(int ch[], int n, int k){
	
	int s=0, c=0;
	double avg;
	for(int i= k; i<n-k; i++){
		s = s+ch[i];
		c++;
	}
	
	avg = (double)s/c;
	
	return avg;
} //절사평균

double calibrated_average(int ch[], int n, int k){
	int s=0;
	double avg=0;
	
	for(int i=k-1;i>=0;i--)
	{
		ch[i]=ch[k];
	}
	for(int j=n-1;j>n-k-1;j--)  // s = k*ch[k] + 위에for문합 + k*a[n-k-1] 
	{ 
		ch[j]=ch[n-k-1];
	}
	
	for(int k=0; k<n; k++){
		s+=ch[k];
	}
	
	avg = (double)s/n;
	
	return avg;
}//보정평균
 
int main(void){
	int n,k;
	double a,b = 0;
	scanf("%d %d", &n, &k);
	
	int ch[n];
		
	for(int i=0; i<n; i++){
		scanf("%d", &ch[i]);
	}
	
	qsort(ch,n,sizeof(int),compare);
	
	a = trimmed_average(ch, n, k);
	b = calibrated_average(ch, n, k);
	
	printf("%.1lf %.1lf",a,b);
	return 0;
}


