#include<stdio.h>

int main (){
	
	char ch;		//定義字元用char ch 
	
	ch = getchar();			//取自元用getchar()來取 
	
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
