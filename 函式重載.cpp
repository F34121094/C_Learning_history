#include<iostream>
#include<stdio.h>
using namespace std;

void print(int value){
	printf("Tnteger:%d\n", value);
}

void print(double value){
	printf("Floating Point:%.2lf\n", value);
}

void input(int a){
	printf("the integer you type is %d\n", a);
}

void input(double b){
	printf("the floating point you type is %.2lf\n", b);
}

int main(){
	print(5);
	print(1.65);
	
	int a;
	double b;
	cout << "\ntype 2 number one is integer one is a floating point" << endl;
	cin >> a >> b;
	input(a);
	input(b);
	
	return 0 ;
}
 
