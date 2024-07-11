#include<iostream>
using namespace std;

int main(){
	string str, reverse;
	getline(cin , str);
	int i;
	
	for( i = 0 ; i < str.length() ; i ++){
		cout << i << " : " << str[i] << endl;
	}
	cout << "str.length() = " << str.length() << endl;
	//cout << i << endl;
	int a = i - 1;
	cout << a << endl;
	if(str[a] == 48){
		for( int b = i - 2 ; b >= 0 ; b --){
			cout << str[b];
		}
	}else{
		for(i ; i >= 0 ; i --){
			cout << str[i];
		}
	}		
	return 0;
}
