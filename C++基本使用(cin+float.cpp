#include<iostream>
using namespace std;

//c++�i�H�ϥΦP�@�ӦW�r���禡�A�b�ݿ�J�Φ������P�Ӵ���X�覡 

int sum(int a,int b){
	cout << "the number you type is interger" << endl;
	return a + b;
}

float sum(float a,float b){
	cout << "the number you type is floating point" << endl;
	return a + b;
}

int main(){
	
	float a, b;		//c++�����ϥ�%d%lf�������ഫ 
	
	cout << "please type 2 number" << endl;
	cin >> a >> b;
	cout << "sum = " << sum(a, b) << endl;
	return 0; 
}
