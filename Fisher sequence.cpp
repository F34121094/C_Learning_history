#include<stdio.h>
// this is a Fisher Sequence
int f(int n){
	if ( n == 0){
		return 0;		
//return 1 ���N��O������1�a�^�h�I�s�o�Ө禡���a��A�b�o�ӵ{�����A�I�s�o�Ө禡���a��O�bf(n)�A
//�]���p�Gn = 0 �� 1 �Af(n)�N�|�������1 
	}
	if( n == 1){
		return 1;
	}
	
	return f(n - 1) + f(n - 2);
}

int main(){
	int n;
	printf("please type a number\n");
	scanf("%d", &n);
	if (f(n) == 0){
		printf("doesn't exist");
	}
	else{
		printf("the result is %d", f(n));
	}
	return 0;
}
