#include<stdio.h>

int main (){
	
	char ch;		//�w�q�r����char ch 
	
	ch = getchar();			//���ۤ���getchar()�Ө� 
	
	if ( ch >= '0' && ch <= '9'){
		printf("\nthe character you type is a number");
	}
	else if ( ch >= 'A' && ch <= 'Z'){
		printf("\nthe character you type is capital letter");
	}
	else if ( ch >= 'a' && ch <= 'z'){
		printf("\nthe character you type is lower case letter");
	}
	else{
		printf("\nyou type other character");
	}
	
	return 0;
}
