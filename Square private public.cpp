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

//������e���n�[a.()�A�]���e���w�g�ΤFSquare�ӫŧia���ܼ�
//�]���᭱�n�s�X�L���ܡA���n��a.�ӥs 
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
