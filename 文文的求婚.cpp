#include<iostream>
using namespace std;

int main(){
	int a;
	
	while(1){
		cin  >> a;
		
		if(a % 4 != 0){
			cout << "���~" << endl;
		}
		else if (a % 4 == 0 && a % 100 ==0){
			cout << "���~" << endl;
		}
		else{
			cout << "�|�~" << endl;
			break;
		}
	}

	return 0;
}
