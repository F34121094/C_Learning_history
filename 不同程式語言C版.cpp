#include<stdio.h>

int evenSum(int a, int b){
	int sum = 0;
	int i ;
	for (i = a ; i <= b ; i ++){
		if (i % 2 == 0){
			sum += i;
		}
	}
	return sum;
}
int main(){
	int a, b;
	printf("type 2 numbers \n");
	scanf("%d%d", &a, &b);
	printf("Even Sum: %d\n", evenSum(a, b));
	return 0;
}	
 
