#include<stdio.h>

int main(){
	
	char a[6];		//char內的中括弧數字減1即為可讀取的字元數目 
	
	printf("please type your character's name (the limit is 5 words)\n");
	fgets(a, 6, stdin);		//只能輸入5個字元 
	puts(a);
	
	return 0;
}
