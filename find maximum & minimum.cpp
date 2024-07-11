#include<stdio.h>

int main(){
	
	int size;		//使用者輸入陣列值 
	
	printf("please enter the size of this array:\n");
	scanf("%d", &size);
	printf("your array size is:%d\n", size);
	
	
	int i;
	int a[size];		//陣列中的那一個數是 代表電腦要給這個陣列幾個空間
						//故中括號中不能放i，因為這樣每次都會變 
		//輸入陣列數目 
	printf("please enter elements of the arrary\n");
	for(i = 0 ; i < size ; i ++){
		//陳列迴圈取數字
		printf("No.%d number:", i + 1);
		scanf("%d", &a[i]); 
	}
	
	int max = a[0];
	for(i = 1 ; i < size ; i ++){
		if(a[i] > max){
			max = a[i];
		}
	}
	
	int j;
	int mini = a[0];
	for(j = 1 ; j < size ; j ++){
		if(a[j] < mini){
			mini = a[j];
		}
	}
	printf("\nthe maximum is %d\n", max);
	printf("the minimum is %d", mini);
	return 0;
	
}
