#include<stdio.h>
#include<stdlib.h>

int main(){
	int n , m;
	while(scanf("%d", &n) != EOF ){
		scanf("%d", &m);
		int total = 0;
		int time = 0;
		if(n>m){
			printf("1\n");
			continue;
		}
		while(total <= m){
			total = n + total;
			time ++;
			n++;
		}
		printf("%d\n", time);
	}
	return 0;
} 
