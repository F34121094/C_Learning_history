//輸入 (幾科) (有幾科就輸入幾科的分數) 被當輸出 yes 否則輸出 no 
#include<stdio.h>
#include<stdlib.h>

int main(){
	int times = 0;
	int n;
	while(scanf("%d",&n) != EOF){
		int ary[30], sum = 0;
		for(int i = 0 ; i < n ; i ++){
			scanf("%d", &ary[i]);
			sum = sum + ary[i];
		}
		double result = (double)sum / (double)n;
		if(result > 59){
			printf("no\n");
		}else printf("yes\n");
	}
	return 0;
} 
