#include<iostream>
using namespace std;

class Person {
	private:
		string _name;
		string _studentid;
		
	public:
		
		void InputStudent(){
			cout << "please input a name" << endl;
			cin >> _name;
			cout << "please input id" << endl;
			cin >> _studentid;
		}
		
		void OutputPerson(){
			cout << endl;
			cout << "name : " << _name << endl;
			cout << "student ID : " << _studentid << endl;
		}
}; 
 
int main(){
	Person student ;
	student.InputStudent();
	student.OutputPerson();
	
	return 0;
} 
