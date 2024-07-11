#include<iostream>
#include<cmath>

using namespace std;
 class Vector{
 	private:
 		float x;
 		float y;
 		
 	public:
 		Vector(){			//這個vector是預設建構式，將x,y初始化為0 
 			x = 0;
 			y = 0;
		 }
		 Vector(float newX, float newY){	//這個vector建立帶有參數的建構式，同時指定x,y的值 
		 	x = newX;
		 	y = newY;
		 }
 		float getLength(){
 			return sqrt(x*x + y*y);
		 }
		Vector operator+(Vector other){
			Vector result(x + other.x, y + other.y);
			return result;
		}
 };
int main(){
	Vector v1(4, 3) , v2(4, 3);
	
	cout << "V1's length is " << v1.getLength() << endl;
	cout << "V2's length is " << v2.getLength() << endl;
	
	Vector v3 = v1 + v2;
	cout << "V1 + V2 = " << v3.getLength() << endl;
	return 0;
}
