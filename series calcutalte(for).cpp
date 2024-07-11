#include<stdio.h>


int main(){
	
	int n, i ;
	double sum = 0;
	
	printf("This is a series calculator of S=1/1+1/2+1/3+...+1/n\nplease type your n here-");
	scanf("%d", &n);		//scanf要記得必須使用&來取值 
	
	for (i = 1; i <= n; i++){		//要進入迴圈需使用<=才能符合 
		sum = sum + 1.0 / i ;		//要記得使用1.0才能確保浮點數的除法 
	}
	
	printf("\nthe result is %f", sum);
	
	return 0;
}
