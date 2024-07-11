#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num;
	int i;
	cin >> num;
	int a = num;
		while(num > 1){
			for(i = num ; i >= 0 ; i --){
				if( pow(2, i) < num ){
					num = num - pow(2, i);
					cout << "1";
					break;
				}
			}	
		}
		for(i ; i > 1 ; i -- ){
			cout << "0";
		}
		if(a % 2 == 1){
			cout << "1";
		}else{
			cout << "0";
		}
	return 0;
}
