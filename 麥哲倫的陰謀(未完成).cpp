#include<stdio.h>
#include<stdlib.h>

int f(int n, int m){
	if(n==m || m==0){
		return 1;
	}else
	return f(n-1, m-1) + 1;
}

int main(){
	for(int i =0 ; i < 2; i++ ){
		int n , m;
	scanf("%d %d", &n, &m);
	int time = f(n ,m);
	printf("%d\n", time);
	
	}
	
	return 0;
} 
