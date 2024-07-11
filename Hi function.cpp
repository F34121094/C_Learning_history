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

void Hi(){		//void是一個不需回傳值的函式，平常在寫函式時要注意其的回傳值，用不同的定義符號去定義 
	for( int i = 0 ; i < 10 ; i ++ )
	printf("Hi!\n");
	}

