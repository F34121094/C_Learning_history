#include <stdio.h>

int main (){
	
	float a, b;
	
	printf("please enter a number represent a\n");
	scanf("%f",& a); 
	printf("the number of a is %f",a);
	printf("\nAnd enter a b\n");
	scanf("%f",& b);
	printf("the number of b is %f",b);
	

	float W, X, Y, Z;

	W = a + b;
	X = a - b;
	Y = a * b;
	Z = a / b ;
	
	printf("\n\na+b is %f",W);
	printf("\na-b is %f",X);
	printf("\na*b is %f",Y);
	printf("\na/b is %f",Z);
	
	return 0;	
}

//�o�q�{���X���̭��n���O�N%d�אּ%f�A�]��%d�O�Q�i�쪺*���*
//��%f���B�I�ơA�]���n�N%d�אּ%f�A�~���X��p���I���Ʀr 
