#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float a, b;
	float ans;
	int type;
	
	printf("type two number to be caculated-\n");
	scanf("%f%f", &a, &b);		//這裡輸入的數字應為浮點數，因此應該使用%f 
	
	printf("\n\ntype 1 to execute addition(a + b)");
	printf("\ntype 2 to execute subtraction(a - b)");
	printf("\ntype 3 to execute multiplication(a * b)");
	printf("\ntype 4 to execute division(a / b)\n");
	
	scanf("%d", &type);
	
	switch(type){
		case 1:
			ans = a + b;
			break;
		
		case 2:
			ans = a - b;
			break;
			
		case 3:
			ans = a * b;
			break;
		
		default:
			ans = a / b;
			break;
	}
	system("pause");
	printf("\n\nthe answer is %f", ans);
	
	return 0;
	
}
