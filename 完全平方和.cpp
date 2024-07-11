#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main(){
	int time;
	
	scanf("%d", &time);
	for(int i = 0; i<time ; i++){
		int a, b;
		scanf("%d", &a);
		scanf("%d", &b);
		int  j = 1;
		while(j < sqrt(a)){
			j++;
		}
		int k = 1;
		while(k<sqrt(b)){
			k++;
		}k = k - 1;
		int sum = 0;
		for(j; j<= k; j++){
			sum = sum + j*j;
		}
		printf("Case %d: %d\n", i+1, sum);
	}
	
	return 0;
}

