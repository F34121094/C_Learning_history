#include<iostream>
#include<cmath>

using namespace std;
 class Vector{
 	private:
 		float x;
 		float y;
 		
 	public:
 		Vector(){			//�o��vector�O�w�]�غc���A�Nx,y��l�Ƭ�0 
 			x = 0;
 			y = 0;
		 }
		 Vector(float newX, float newY){	//�o��vector�إ߱a���Ѽƪ��غc���A�P�ɫ��wx,y���� 
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
