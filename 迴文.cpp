#include<iostream>
#include<string.h>
using namespace std;

int main (){
	string str;
	getline(cin, str);

	int length = str.length() -1;	
	for(int i = 0 ; i <= length  ; i ++){
		if( str[i] == str[length]){
			length --;
			continue;
		}
		else{
			cout << "no" << endl;
			return 0; 
		}
	}
	cout << "yes"; 
	return 0;
} 
