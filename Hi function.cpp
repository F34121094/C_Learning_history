#include<stdio.h>
#include<stdlib.h>

void Hi();

int main(){
	printf("Ready to call Hi()\n");
	system("pause");
	printf("----------------\n");
	Hi();
	printf("----------------\n");
	printf("calling Hi() has been done");
	return 0;
}

void Hi(){		//void�O�@�Ӥ��ݦ^�ǭȪ��禡�A���`�b�g�禡�ɭn�`�N�䪺�^�ǭȡA�Τ��P���w�q�Ÿ��h�w�q 
	for( int i = 0 ; i < 10 ; i ++ )
	printf("Hi!\n");
	}

