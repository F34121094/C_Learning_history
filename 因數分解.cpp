#include<iostream>
using namespace std;

//�n������ : �|��ܨC�@�� i �A�N�� i �S��k�㰣 i�٬O�|�Q���

int main(){
	int number;
	int time;
	int absolutenum;
	cin >> number;
	absolutenum = number;
	
	for(int i = 2 ; i <= number ; i ++){
		time = 0;
	
		while(number % i == 0){		//while�|�@�������number % i ������ 0 
		time ++;
		number = number / i;
		}	
		
		if(time == 0){
			continue;		//�n��if�^��for�j��i�H�ϥ�continue�����{���~����� 
		}
		else if(time == 1){
			cout << i; 
		}
		else {
			cout << i << "^" << time;
		}
		
		if(absolutenum % i == 0 && time != 0 && number != 1){
			cout << " * ";
		}
		
	
	}
	return 0;
} 
