#include<stdio.h>

//題目：計算二維陣列每行的總和和平均值
//撰寫一個程式，要求使用者輸入一個 3x3 的二維整數陣列，然後計算每行的總和和平均值。


int main(){
	int a[3][3];
	int i, j;
	
	printf("you would need to enter a 3*3 two dimensional arrays\n ");
	printf("and this program would give a summation of each row\n");
	
	for(i = 0 ; i < 3 ; i ++){
		printf("\nthis is No.%d row\n\n", i + 1);
		for(j = 0 ; j < 3 ; j ++){
			printf("this is No.%d\n", j + 1);
			printf("type here-");
			scanf("%d", &a[i][j]);
		}
	}
	//取值完畢 
	int sum1 = 0;	//總和sum 定義 
	int sum2 = 0;
	int sum3 = 0;
	
	
	for(j = 0 ; j < 3 ; j ++){
		
		sum1 += a[0][j];
		sum2 += a[1][j];
		sum3 += a[2][j];		
	}
	
	printf("\nthe summation of the first row is %d\n", sum1);
	printf("the summation of the second row is %d\n", sum2);
	printf("the summation of the thrid row is %d\n", sum3);
	
	return 0;
}
