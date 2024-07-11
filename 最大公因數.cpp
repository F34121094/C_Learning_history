#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int i;
	if(a >= b){
	for(i = b ; i > 0 ; i --){
		if (a % i == 0 && b % i == 0){
			cout << i;
			return 0;
		}else{
			continue;
		}
	}
	}
	else{
		for(i = a ; i > 0 ; i --){
		if (a % i == 0 && b % i == 0){
			cout << i;
			return 0;
		}else{
			continue;
		}
	}
	}
	return 0;
} 
