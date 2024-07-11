#include<iostream>
using namespace std;

class Student{			//用class來建立一個student的類別，然後可以存下面的宣告的變數類別 
	public:
		//資料(屬性、變數) 
		char name[100];
		int age;
		int blood;
		int chinesescore;
		int mathscore;
		int englishscore;
		
		//操作(方法、函式)
		void print(){
			const char* bloodtable[4] = {"A", "B", "O", "AB"};
			
			printf("student %s (%d) : \n", name, age);
			printf("bloodtable : %s\n", bloodtable[blood]);
			printf("Chinese Score : %d\nMath Score : %d\nEnglish Score : %d",
			chinesescore, mathscore, englishscore);
		} 
};

int main(){
	Student students[2] = {			//這裡用Student叫出一開始用的class來存student的資料 
	{"Sonic", 30, 1, 95, 65, 88},
	{"Willy", 24, 3, 88, 85, 99}
};
	for(int i = 0 ; i < 2 ; i ++){
		students[i].print();			///這裡用print印出void函式中的資料 
		printf("\n");
	}
	return 0;
} 
