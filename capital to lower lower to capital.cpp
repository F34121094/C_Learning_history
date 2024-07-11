#include<stdio.h>
//將小寫字母轉成大寫字母，其字元的差距皆為32 

int main(){
	
	char ch;
	printf("please type a letter here-");
	ch = getchar();
	printf("\n");
	
	if( ch >= 'a' && ch <= 'z'){
		printf("you type a lower case letter\nand the capital one is-");
		ch -= 32;
		printf("%c", ch);
	}
	else if ( ch >= 'A' && ch <='Z'){
		printf("you type a capital letter\n and the lower case one is-");
		ch += 32;
		printf("%c", ch);	
	}
	else{
		printf("you type a cahracter but it isn't a letter'");
	}
	return 0;
}
