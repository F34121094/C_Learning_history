#include<iostream>
#include<stdlib.h>
using namespace std;

class Student{
	private:
		string name;
		string ID;
		int age;
		string gender;
		int chinese;
		int math;
		int english;
	public:
		Student(){
			name = "none";
			ID = "none";
			age = 0;
			gender = "none";
			chinese = 0;
			math = 0;
			english = 0;
		}

		void SetInfo(){
			cout << "you choose set information" << endl;
			cout << "please type the student's name, ID, age, and gender " << endl;
			cin >> name >> ID >> age >> gender;
			cout << "student : " << name << endl;
			cout << "ID : " << ID << endl;
			cout << "age : " << age << endl;
			cout << "gender : " << gender << endl;
		}
		void SetScore(){
			cout << "you choose set score" << endl;
			cout << "please type the student's Chinese, Math , English score" << endl;
			cin >> chinese >> math >> english;
			cout << "Chinese Score : " << chinese << endl;
			cout << "Math Score : " << math << endl;
			cout << "English Score : " << english << endl;
		}
		void GetInfo(){
			cout << "you choose get student information" << endl;
			cout << "------------------------" << endl;
			cout << "student : " << name << endl;
			cout << "ID : " << ID << endl;
			cout << "age : " << age << endl;
			cout << "gender : " << gender << endl;
		}
		void GetScore(){
			cout << "you choose get score" << endl;
			cout << "------------------------" << endl;
			cout << "Chinese Score : " << chinese << endl;
			cout << "Math Score : " << math << endl;
			cout << "English Score : " << english << endl;
		}
		void CalculateAverage(){
			cout << "you choose calculate average" << endl;
			cout << "Chinese Score : " << chinese << endl;
			cout << "Math Score : " << math << endl;
			cout << "English Score : " << english << endl;
			cout << "------------------------" << endl;
			cout << "Average : " << (math + english + chinese) / 3 << endl;
			
		}
};

int main(){
	int a;
	int b;
	Student s;
	cout << "this is a student information system" << endl;
	cout << "------------------------" << endl;
	cout << "1 - set student information" << endl;
	cout << "2 - get student information" << endl;
	cout << "3 - set student score" << endl;
	cout << "4 - get student score" << endl;
	cout << "5 - cancel" << endl;
	cin >> a;
	switch(a){
		case 1 :
			s.SetInfo();
			break;
		case 2 :
			s.GetInfo();
			break;
		case 3 :
			s.SetScore();
			break;
		case 4 :
			s.GetScore();
			break;
		case 5 :
			cout << "you choose cancel " << endl ;
			cout << "this system will cancel after you pause any key om the board" << endl;
			system("pause");
			return 0;	
	}
	cout << "If you want to  continue type 1 ,otherwise type any other key" << endl;
	cin >> b;
	while ( b == 1){
		cout << "you choose continue" << endl;
		cout << "------------------------" << endl;
		cout << "1 - set student information" << endl;
		cout << "2 - get student information" << endl;
		cout << "3 - set student score" << endl;
		cout << "4 - get student score" << endl;
		cout << "5 - cancel" << endl;
		cin >> a;
		switch(a){
			case 1 :
				s.SetInfo();
				break;
			case 2 :
				s.GetInfo();
				break;
			case 3 :
				s.SetScore();
				break;
			case 4 :
				s.GetScore();
				break;
			case 5 :
				cout << "you choose cancel " << endl ;
				cout << "this system will cancel after you pause any key om the board" << endl;
				system("pause");
				return 0;	
	}
	cout << "If you want to  continue type 1 ,otherwise type any" << endl;
	cin >> b;
	}
	cout << "you didn't type 1" << endl;
	cout << "this system will cancel after you pause any key om the board" << endl;
	system("pause");
	return 0;
}
