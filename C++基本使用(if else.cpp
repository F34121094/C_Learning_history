//寫一個問別人會多少語言的程式
#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	cout << "How many language do you speak ?" << endl;
	cin >> a;
	
	if (a < 1){
		cout << "Are you serious ?" << endl;
		for (int i = 0 ; i <2 ; i ++){
			cout << "You really can't speak any language ?" << endl;
			cout << "How many language do you speak ?";
			cin >> b;
			if(b >= 1){
				break;
			}
		}
		cout << "\nI think you should try to learn at least 1, Good luck" << endl;
	a = b; 
	}
	if(a == 1){
		 cout << "you can say " << a << " language ?" <<endl;
		 cout << "suounds great" << endl;
	}else{
		cout << "you can say " << a << " languages ?" <<endl;
		cout << "fabulous !" << endl;
	}
	 return 0;
} 
