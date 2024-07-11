#include<iostream>
using namespace std;

int main(){
	int a;
	
	while(1){
		cin  >> a;
		
		if(a % 4 != 0){
			cout << "平年" << endl;
		}
		else if (a % 4 == 0 && a % 100 ==0){
			cout << "平年" << endl;
		}
		else{
			cout << "閏年" << endl;
			break;
		}
	}

	return 0;
}
