#include<iostream>
using namespace std;

//c++可以使用同一個名字的函式，在看輸入形式的不同而換輸出方式 

int sum(int a,int b){
	cout << "the number you type is interger" << endl;
	return a + b;
}

float sum(float a,float b){
	cout << "the number you type is floating point" << endl;
	return a + b;
}

int main(){
	
	float a, b;		//c++不必使用%d%lf之類的轉換 
	
	cout << "please type 2 number" << endl;
	cin >> a >> b;
	cout << "sum = " << sum(a, b) << endl;
	return 0; 
}
