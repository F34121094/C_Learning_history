#include<iostream>
using namespace std;

class Student{			//��class�ӫإߤ@��student�����O�A�M��i�H�s�U�����ŧi���ܼ����O 
	public:
		//���(�ݩʡB�ܼ�) 
		char name[100];
		int age;
		int blood;
		int chinesescore;
		int mathscore;
		int englishscore;
		
		//�ާ@(��k�B�禡)
		void print(){
			const char* bloodtable[4] = {"A", "B", "O", "AB"};
			
			printf("student %s (%d) : \n", name, age);
			printf("bloodtable : %s\n", bloodtable[blood]);
			printf("Chinese Score : %d\nMath Score : %d\nEnglish Score : %d",
			chinesescore, mathscore, englishscore);
		} 
};

int main(){
	Student students[2] = {			//�o�̥�Student�s�X�@�}�l�Ϊ�class�Ӧsstudent����� 
	{"Sonic", 30, 1, 95, 65, 88},
	{"Willy", 24, 3, 88, 85, 99}
};
	for(int i = 0 ; i < 2 ; i ++){
		students[i].print();			///�o�̥�print�L�Xvoid�禡������� 
		printf("\n");
	}
	return 0;
} 
