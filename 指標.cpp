#include<iostream>
using namespace std;

int f(int &b){
	b = 3; 
}

int main(){
	int a = 5;
	f(a);		//«Å§ia = b = 3  
	cout <<	"a = " << a << endl; 
	return 0;
}
 
