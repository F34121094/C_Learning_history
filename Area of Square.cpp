#include<iostream>
using namespace std;

class Square{
	public:				//要記得用class時，必須搭配public 
		int len;
		void area(){
			int area;
			area = len * len;
			cout << "Area : " << area;
			cout << "\n";
		}
};



int main(){
	
	Square squares[2];			//利用Square來宣告兩個squares變數 
	for(int i = 0 ; i < 2 ; i ++){
		cout << "please type a len of a square" << endl;
		cin >> squares[i].len;
		squares[i].area();
	}
	return 0;
}
