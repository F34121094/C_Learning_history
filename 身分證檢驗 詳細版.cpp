#include<iostream>
#include<string>
using namespace std;

int main(){
	string ID;
	int sum = 0;
	int a = 8;
	getline(cin, ID);

	int number = static_cast<int>(ID[0] -57);
	int ones = number % 10;
	int tens = (number - ones) / 10;
	for(int i = 1 ; i <= 8 ; i ++){
		int integer = static_cast<int>(ID[i] - 48);
		sum = sum + a * integer;
		cout << a << " * " << integer << endl ;
		a --;
	}
	sum = sum + static_cast<int>(ID[9] - 48);
	cout <<static_cast<int>(ID[9] - 48) << endl;
	cout << "sum = " << (tens + ones * 9 + sum) ;
	if((tens + ones * 9 + sum) % 10 == 0){
		cout << "real";
	} else{
		cout << "fake";
	}
	return 0;
} 
