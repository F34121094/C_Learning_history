#include<stdio.h>
//�S��k�Ψ禡����k�h�洫��ӼơA���]���O���骺��m���O�@�˪��A�G�i�H�ΰO���骺�覡����m 
void swap(int *a, int *b){
	int temp;
	temp = *a;	//a�O�����m���Ȧs�Jtemp 
	*a = *b;	//b�O�����m���Ȧs��a�O�����m 
	*b = temp;	//temp���Ȧs�Jb�O�����m 
	
}

int main(){
	int a = 3, b = 5;
	int c = 6, d = 9;
	printf("a = %d, b = %d\n", a, b);
	printf("c = %d, d = %d\n\n", c, d); 

	swap(&a, &b);	//���Xa ,b�O���骺��m 
	swap(&c, &d);
	
	printf("a = %d, b = %d (been changed)\n", a, b);
	printf("c = %d, d = %d (been changed)\n", c, d);
	return 0;
}
