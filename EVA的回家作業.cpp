#include<iostream>
using namespace std;

int main(){
	int time;
	cin >> time;
	for(int i = 0 ; i < time ; i++){
		int a, b, c, d, e;
		cin >>  a >> b >> c >> d;
		if (b - a == c - b){
			e = d + (b - a);
			cout << a << " " << b << " " << c << " " << d << " " << e;
		}
		else{
			e = d * (b / a);
			cout << a << " " << b << " " << c << " " << d << " " << e;
		}
	}
	
	return 0;
}
