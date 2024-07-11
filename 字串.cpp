#include<stdio.h>

int main(){
	char str[80];
	
//	scanf("%s", str);
	gets(str);		//用gets()作為輸入的話可以存有空格的字串 
	
//	printf("%s", str);
	puts(str);		//puts()輸出字元陣列中的str字串 
	 
	return 0;
}
