#include<stdio.h>
//沒辦法用函式的方法去交換兩個數，但因為記憶體的位置都是一樣的，故可以用記憶體的方式換位置 
void swap(int *a, int *b){
	int temp;
	temp = *a;	//a記憶體位置的值存入temp 
	*a = *b;	//b記憶體位置的值存到a記憶體位置 
	*b = temp;	//temp的值存入b記憶體位置 
	
}

int main(){
	int a = 3, b = 5;
	int c = 6, d = 9;
	printf("a = %d, b = %d\n", a, b);
	printf("c = %d, d = %d\n\n", c, d); 

	swap(&a, &b);	//取出a ,b記憶體的位置 
	swap(&c, &d);
	
	printf("a = %d, b = %d (been changed)\n", a, b);
	printf("c = %d, d = %d (been changed)\n", c, d);
	return 0;
}
