#include<iostream>
#include<stdio.h>
using namespace std;

int swap (int *a, int *b){
	int temp = *a;		//將 a 指標指向的值，給temp變數 
	*a = *b;			//將 b 指標指向的值，傳給 a 的指標 
	*b = temp;			//將 temp 變數的值，傳給 b 的指標 
}						//實現兩數互換的功能 

int main(){
	int a = 5;
	int b = 10 ;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	swap(a, b);
	cout << endl << "After switch" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b;
	
	return 0;
}
 
