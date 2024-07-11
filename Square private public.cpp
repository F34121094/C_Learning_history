#include<iostream>
using namespace std;

class Square{
	private:
		int len;
		
	public:
		int area(){
			return len * len;
		}
		
		void setlen(int l){
			len = l;
		}
		
		int getlen(){
			return len;
		}
}; 

//為什麼前面要加a.()，因為前面已經用了Square來宣告a的變數
//因此後面要叫出他的話，都要用a.來叫 
int main(){
	int s;
	cout << "please type a number as a square's len" << endl;
	cin >> s;
	Square a;
	a.setlen(s);
	cout << "Len : " <<  a.getlen() << endl;
	cout << "Area : " << a.area() << endl;
	return 0;
} 
