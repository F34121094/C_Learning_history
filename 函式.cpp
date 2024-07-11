#include<stdio.h>

int sum(int n){		//sum函式，n代表的是a跟b接收的值 
	int total = 0;
	int i;
	for(i = 0 ; i <= n ; i ++){
		total += i;
	}
	
	return total;		//將算出來的這個total值返回到sum裡面計算 
}

int main(){		//主函式 
	
	int a, b;
	scanf("%d%d", &a, &b);
	double sumA = sum(a); 
	double sumB = sum(b); 	//記得定義sum = 0 
	printf("sumA = %d , sumB = %d\n", sumA, sumB );
	printf("sumA + sumB = %.lf\n", sumA + sumB);
	printf("sumA - sumB = %.lf\n", sumA - sumB);
	printf("sumA * sumB = %.lf\n", sumA * sumB);
	printf("sumA / sumB = %.4lf\n", sumA / sumB);

	return 0;
} 
