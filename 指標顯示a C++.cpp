#include<iostream>
using namespace std;

int f(int *ptr){
	*ptr = 3; 
}

int main(){
	int a = 5;
	
	f(&a);
	cout <<	"a = " << a << endl; 
	return 0;
}
 
