#include<iostream>
using namespace std;

class Book
{
	public:
	char title[100];
	char author[100];
	int publisherYear;
	double price;
	
	void displayInfo(){
		cout << "Title : " << title << endl;
		cout << "Author : " << author << endl;
		cout << "Publish Year : " << publisherYear << endl;
		cout << "Price : " << price << endl << endl;
	}		
};

void setprice(double &Cprice, double &Vprice){			//À³¸Ó±N 
	int a;
	cout << "if you want to cange the price please type 1, or the system would close" << endl;
	cin >> a;
	while( a == 1){
		cout << "type the price you want to change of The Creative ACT: A Way of Being" << endl;
		cin >> Cprice;
		cout << "type the price you want to change of The Vulnerables" << endl;
		cin >> Vprice;
		
		cout << endl << "the price after changing" << endl << endl;
		cout << "The Creative ACT: A Way of Being-" << endl << Cprice << endl; 
		cout << "The Vulnerables-"<< endl << Vprice << endl;
		
		break;
	}
	return;
}

int main(){
	double Cprice = 0.0;
	double Vprice = 0.0;
	
	Book books[2] = {
	{"The Creative ACT: A Way of Being", "Rubin Rick", 2023, 1216.0 },
	{"The Vulnerables", "Nunez Sigrid", 2023, 646.0}
	}; 
	
	for(int i = 0 ; i < 2 ; i ++){
	books[i].displayInfo();
	}
	setprice(Cprice, Vprice);
	return 0;
} 
