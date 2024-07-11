#include<iostream>
using namespace std;

int evenSum(int a, int b){
	int sum = 0;
	int i ;
	for (i = a ; i <= b ; i ++){
		if (i % 2 == 0){
			sum += i;
		}
	}
	return sum;
}
int main(){
	int a, b;
	cout << "type 2 numbers" << endl;
	cin >> a >> b;
	cout << "Even Sum " << evenSum(a, b);
	return 0;
}	
 
