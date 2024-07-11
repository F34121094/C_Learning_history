#include<iostream>
using namespace std;

class Bankaccount{
	private:
		string ownerName ;			//在classa中的字串要記得用string來宣告 
		int balance;
	
	public:
		Bankaccount(){
			ownerName = "Willy";
			balance = 30000;
		}
		
	void deposit(){
		int a;
		cout << endl << "you choose deposit" << endl;
		cout << "please type the amount of money you want to deposit" << endl;
		cin >> a;
		balance += a;
		cout << "Balance : " << balance << endl;
	}
	
	void withdraw(){
		int b;
		cout << endl << "you choose withdraw" << endl;
		cout << "please type the amount oh money you want to withdraw" << endl;
		cin >> b;
		balance -= b;
		cout << "Balance : " <<  balance << endl;
	}
	void displayInfo(){
		cout << endl << "you choose dispay your account information" << endl;
		cout << "this account's name : " << ownerName << endl; 
		cout << "your account balance : " << balance << endl;
	}
	void firstdisplayInfo(){
		cout << endl << "this account's name : " << ownerName << endl; 
		cout << "your account balance : " << balance << endl;
	}
};

int main(){
	int type;
	Bankaccount A;
	cout << "this system will show your bank account'information" << endl;
	
	A.firstdisplayInfo();
	
	while(1){
	cout << endl << "Deposit - type 1" << endl << "Withdraw - type 2" << endl << "display Information - type 3" << endl << "Cancel trading - type 4" << endl;
	cin >> type;
	switch(type){
		case 1:
			A.deposit();
			break;
		case 2:
			A.withdraw();
			break;
		case 3:
			A.displayInfo();
			break;
		case 4:
			cout << endl << "this trading is end" << endl; 
			cout << "thanks , please wait a second to trade" << endl;
			return 0;
	}
	}
	return 0 ;
}
