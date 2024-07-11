#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int *pointer;		
	
	printf("please type number of words\n");
	scanf("%d", &n);
	
	pointer = (int*)malloc(sizeof(int)*n);	//sizeof(int)為記憶體*n為需要多少個記憶體 
											//malloc則為一個指標，將其存回pointer中 
	
	int i;
	for (i = 0 ; i < n ; i ++ ){
		printf("the No.%d number is ",i + 1);
		scanf("%d", &pointer[i]);		//要記得scanf後面要加&把輸入的數值存到該記憶體的位置 
	}									//pointer[i] = (pointer + i)在這個記憶體位置，取其中的值出來 
	
	int sum = 0;		//記得要定義sum = 0 
	for(i = 0 ; i < n ; i ++){
	sum += pointer[i];
	}
	
	printf("sum is %d", sum);
	
	free(pointer);
	return 0;
} 
