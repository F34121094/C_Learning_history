#include<iostream>
using namespace std;

int add(int a, int b){
	cout << "\nadd" << endl;
	return a + b; 
}

int subtract(int a, int b){
	cout << "\nsubtract" << endl;
	return a - b;
}

int multiple(int a, int b){
	cout << "\nmultiple" << endl;
	return a * b;
}

int divide(int a, int b){
	cout << "\ndivide" << endl;
	return a / b;
}
int main(){
	int a ;
	int b ;
	cout << "please type 2 numbers, one as a , one as b" << endl;
	cin >> a >> b;
	
	
	int (*calculate[4])(int a, int b) =
	{ add, subtract, multiple, divide};
	
	for(int i = 0 ; i <= 4 ; i++ ){
		cout << "result : " << calculate[i](a, b) << endl;
	}
	/* 
	cout << "type a number as a, and a number as b" << endl;
	cin >> a >> b; 
	cout << "\n1 : add" << endl;
	cout << "2 : subtract" << endl;
	cout << "3 : multiple" << endl;
	cout << "4 : divide" << endl;
	
	int select;
	cin >> select;
	int (*calculate)(double a, double b);
	switch(select){
		case 1: 
		calculate = add;
		break;
		case 2:
		calculate = subtract;
		break;
		case 3:
		calculate = multiple;
		break;
		case 4:
		calculate = divide;
		break;
		default:
		calculate = add;
		break; 
	}
	double result = calculate(a, b);
	
	cout << "result : " << result << endl;
	*/
	return 0;
}
