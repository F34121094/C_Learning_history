#include<stdio.h>

int ans(int n);

int main(){
	int n;
	printf("type a number as n to calculate 1+2+3+...+n\n");
	scanf("%d", &n);
	printf("the result is %d", ans(n));	
	
	return 0;
}

int ans(int n){
	int sum = 0;
	for( int i = 1 ; i <= n ; i ++){
		sum += i;
	}	
	return sum;
}
