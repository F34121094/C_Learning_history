#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b, c, result;
	cin >> a >> b >> c;
	result = b * b - 4 * a * c;
	
	if(result > 0){
		int x1, x2;
		x1 = (-b + sqrt(result)) / (2 * a);
		x2 = (-b - sqrt(result)) / (2 * a);
		cout << "Two different roots";
		cout << " x1=" << x1 << " , x2=" << x2;

 	} else if (result == 0){
 		int x;
 		x = (-b + sqrt(result)) / (2 * a);
 		cout << "Two same roots";
		cout << " x=" <<  x;
	 }else{
	 	cout << "No real root";
	 }
	
	return 0;
}
