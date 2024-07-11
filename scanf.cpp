#include <stdio.h>

int main(){
	
	int a;	//cna be writen as (int a, b;), same as int a; int b;
	int b;	//int 為讓記憶體給一個空間int為要32個bits 
	
	printf("please enter a number which represent a\n");
	scanf("%d", &a);	//%d 讓電腦給一個空間輸入，且輸入的值代表a 
	printf("\nAnd then enter a number b\n");
	scanf("%d", &b);
	printf("\na is %d,b is %d\n",a ,b);
	
	return 0;
} 
