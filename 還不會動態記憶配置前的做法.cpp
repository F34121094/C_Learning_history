#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	
	printf("please type number of words\n");
	scanf("%d", &n);
	
	int array[n];		//還沒學過動態記憶體配直時，可以先定義要很多個記憶體，避免到時候空間不足 
	int i;				//也可以直接把array放在知道n值是多少的後面，程式即可運行 
	
	for (i = 0 ; i < n ; i ++ ){
		printf("the No.%d number is ",i + 1);
		scanf("%d", &array[i]);		//要記得scanf後面要加&把輸入的數值存到該記憶體的位置 
	}
	
	int sum = 0;		//記得要定義sum = 0 
	for(i = 0 ; i < n ; i ++){
	sum += array[i];
	}
	
	printf("sum is %d", sum);
	
	return 0;
} 
