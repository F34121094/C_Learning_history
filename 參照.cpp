#include<iostream>
#include<stdio.h>
using namespace std;

int swap (int *a, int *b){
	int temp = *a;		//�N a ���Ы��V���ȡA��temp�ܼ� 
	*a = *b;			//�N b ���Ы��V���ȡA�ǵ� a ������ 
	*b = temp;			//�N temp �ܼƪ��ȡA�ǵ� b ������ 
}						//��{��Ƥ������\�� 

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
 
