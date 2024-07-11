#include<iostream>
#include<stdio.h>
using namespace std;

template <class T>		//template可以把不同型態的同種功能式子結合 
void print(T value){
	cout << "value: " << value << endl;
}

int main(){
	int a = 5;
	double b = 6.45;
	print(a);
	print(b); 
	cout << "\nplease type 2 numbers one is integer one is floating point\n";
	cin >> a >> b;
	print(a);
	print(b);
	
	return 0;
}
//宣告時			||使用時
//[]:陣列要有幾格	||要選擇陣列的第幾格
//*:宣告一個指標	||要把位置轉成位置上的變數(或是乘法)
//&:宣告一個參照	||要拿到變數的記憶體位置 
 
