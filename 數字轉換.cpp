#include<iostream>
#include<iostream>
using namespace std;

int main(){
	string str, reverse;
	getline(cin , str);
	int i;
	for( i = 0 ; i < str.length() ; i ++);
	//cout << i << endl;

	cout << i;
	if(str[i - 1] == 48){
		for( int b = i - 2 ; b >= 0 ; b --){
			cout << str[b];
		}
	}else{
		for(int a = i - 1 ; a >= 0 ; a --){
			cout << str[i];
		}
	}		
	return 0;
}
