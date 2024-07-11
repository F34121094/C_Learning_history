#include<iostream>
using namespace std;

class Time {
	private:
		/*資料(屬性、變數)*/
		int hour;
		int minute;
		int second;
		
	public:
		/*行為(操作、方法、函式)*/
		//初始化方法:建構式
		Time(){				//建構式 
			hour = 0;
			minute = 0;
			second = 0;
		} 
		
		void set(int h, int m, int s){
			hour = h;
			minute = m;
			second = s;
		}
		
		int getHour(){
			return hour;
		}
		
		void setHour(int h){
			if(h >= 0 && h <= 23){
				hour = h;
			}else{
				cout << "Error : Hour is not in the correct format" << endl;
			}		
	}
		void setminute(int m){
			if(m >= 0 && m <= 59){
				minute = m;
			}else{
				cout << "Error : Minute is not in the correct format" << endl;
			}		
	}
		void setSecond(int s){
			if(s >= 0 && s <= 59){
				second = s;
			}else{
				cout << "Error : Second is not in the correct format" << endl;
			}		
	}
		void showTime(){
			cout << hour << ":" << minute << ":" << second;
		}
};

int main(){
	Time t;
	int a, b, c;
	cout << "type Hour" << endl;
	cin >> a;
	cout << "type Minute" << endl;
	cin >> b;
	cout << "type Second" << endl;
	cin >> c;
	
	t.setHour(a);
	t.setminute(b);
	t.setSecond(c);
	
	cout << endl << "the time is" << endl;
	t.showTime();
	
	return 0;
}
