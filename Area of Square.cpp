#include<iostream>
using namespace std;

class Square{
	public:				//�n�O�o��class�ɡA�����f�tpublic 
		int len;
		void area(){
			int area;
			area = len * len;
			cout << "Area : " << area;
			cout << "\n";
		}
};



int main(){
	
	Square squares[2];			//�Q��Square�ӫŧi���squares�ܼ� 
	for(int i = 0 ; i < 2 ; i ++){
		cout << "please type a len of a square" << endl;
		cin >> squares[i].len;
		squares[i].area();
	}
	return 0;
}
