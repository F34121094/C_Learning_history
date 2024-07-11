#include<stdio.h>

int main(){
	
	int i, j;
	int sum;
	
	for(i = 1; i <= 9; i++ ){		//使用for迴圈時，要注意大括號的位置及數量 
		printf("\n");
		for(j = 1; j <= 5; j++){		//將j用5作為分隔使其不會太長 
			sum = i * j;
			printf("%d * %d = %d\t", j, i, sum);		//\t能產生縮排的效果 
		}
	}	
	
	printf("\n");
	
	for(i = 1; i <= 9; i++ ){
		printf("\n");
		for(j = 6; j <= 9; j++){
			sum = i * j;
			printf("%d * %d = %d\t", j, i, sum);
		}
		
	}

	
	return 0;
}
