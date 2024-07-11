#include<iostream>
#include<string>
using namespace std;

int main(){
	string  line;
	getline(cin, line);

	for(int i = 0 ; i < line.length() ; i ++){
		char c = line[i];
		int ASCII = static_cast<int>(c);
		int newASCII;	
		newASCII = ASCII - 7;
		char newc = static_cast<char>(newASCII);
		cout << c << " = " << ASCII << " -> " << newASCII << " = " << newc << endl;	
	}
	return 0;
}
