#include<iostream>
#include<stdio.h>
using namespace std;

template <class T>		//template�i�H�⤣�P���A���P�إ\�ড�l���X 
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
//�ŧi��			||�ϥή�
//[]:�}�C�n���X��	||�n��ܰ}�C���ĴX��
//*:�ŧi�@�ӫ���	||�n���m�ন��m�W���ܼ�(�άO���k)
//&:�ŧi�@�Ӱѷ�	||�n�����ܼƪ��O�����m 
 
