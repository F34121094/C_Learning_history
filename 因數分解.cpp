#include<iostream>
using namespace std;

//要除的錯 : 會顯示每一個 i ，就算 i 沒辦法整除 i還是會被顯示

int main(){
	int number;
	int time;
	int absolutenum;
	cin >> number;
	absolutenum = number;
	
	for(int i = 2 ; i <= number ; i ++){
		time = 0;
	
		while(number % i == 0){		//while會一直執行到number % i 不等於 0 
		time ++;
		number = number / i;
		}	
		
		if(time == 0){
			continue;		//要讓if回到for迴圈可以使用continue來讓程式繼續執行 
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
