#include<iostream>
#include<string>
using namespace std;

int main(){
	string  line;
	// J = 74 , C = 67, -7 , * = 42, 1= 49 
	getline(cin, line);
	//cout << &(line) << endl;
	//&line = &line - 7;
	for(int i = 0 ; i < line.length() ; i ++){
		char c = line[i];
		int ASCII = static_cast<int>(c);
		int newASCII;	
		newASCII = ASCII - 7;
		char newc = static_cast<char>(newASCII);
		cout << c << " = " << ASCII << " -> " << newASCII << " = " << newc << endl;
	
	}
	//cout << line;
	return 0;
}
