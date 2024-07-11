#include<stdio.h>

int main(){
	
	//陳列大小
	int size;
	int x;
	
	//用一個do if while的迴圈做一個按1才能繼續執行的程式碼 
	do{
		printf("please enter the size of your arrary\n");
		scanf("%d", &size);
		printf("your arrary size is:%d\nif this number is correct type '1'", size);
		scanf("%d", &x);
	if(x != 1){		//確認數字 
	printf("please enter the size of your arrary again\n");
	scanf("%d", &size);
	printf("your arrary size is:%d\nif this number is correct type '1'", size);
	scanf("%d", &x);
		}
	}	
	while (x != 1);
	printf("please type the elements here-\n");

			
		//取陣列數字 
	double a[size];
	int i;
		
	for(i = 0 ; i < size ; i ++){
		printf("No.%d:", i + 1);
		scanf("%lf", &a[i]);
		}
	//陣列總和求平均 
	double sum = 0;		//sun要記得加=0 不然電腦會不知道等於多少 
	for(i = 0 ; i < size ; i ++){
		sum += a[i];
	}

	printf("the sum is %.lf", sum);
	printf("\nthe average is %lf", sum / size);
	
	return 0;
}

