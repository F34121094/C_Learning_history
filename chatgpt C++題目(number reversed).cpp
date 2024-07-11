#include<iostream>
using namespace std;

void reverseDigits(int num){
	int newnum = 0;
	int lastnum;
	if(num < 0){
		num = -num;
		while( num > 0){
		lastnum = num % 10;		
		num = num / 10;			
		newnum = newnum * 10 + lastnum;
		}
		cout << "\nthe reversed number -\n" <<-newnum;
	}
	else{ 
	while( num > 0){
	lastnum = num % 10;		//get lastnumber
	num = num / 10;			//remove the last number
	newnum = newnum * 10 + lastnum;
	}
	cout << "\nthe reversed number is -\n" << newnum;
	} 
}

int main(){
	int num;
	int i;
	
	cout << "please typea a string with 5 numbers" << endl;
	cin >> num;
	reverseDigits(num);
	
	/*cin >> a[4];
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;
*/	
	
	/*for (int i = 5 ; i >= 0 ; i --){
		cout << a[i];
	}
	*/ 
	return 0;
}
